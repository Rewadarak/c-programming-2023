#include<stdio.h>>
int main()
{
	int i,j,n;
	printf("Enter size of square matrix ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter matrix values");
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	  printf("%d ",a[i][j]);
	  printf("\n");
    }
    return 0;
}
