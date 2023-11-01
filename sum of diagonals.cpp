#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter size of square matrix ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter matrix values ");
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	k=0;
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  if(i==j)
	    k=k+a[i][i];
	printf("The sum of diagonals is %d",k);
    return 0;
}
