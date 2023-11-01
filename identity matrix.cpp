#include<stdio.h>
int main()
{
	int i,j,n,k,l;
	printf("Enter size of square matrix ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter matrix values ");
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	k=0;
	l=0;
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	 {
	  if(i==j && a[i][i]==1)
	    k=k+1;
	  else if(i!=j && a[i][j]==0)
	    l=l+1;
     }
    if(k+l==n*n)
	 printf("It is an identity matrix");
	else
	 printf("It is not an identity matrix");
    return 0;
}
