#include<stdio.h>>
int main()
{
	int i,j,n;
	printf("Enter size of square matrix ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n],d[n][n];
	printf("Enter matrix a values ");
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	printf("Enter matrix b values ");
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&b[i][j]);
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	 {
	 	c[i][j]=a[i][j]+b[i][j];
	 	d[i][j]=a[i][j]-b[i][j];
	 }
	printf("sum of matrix is:\n");
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	  printf("%d ",c[i][j]);
	  printf("\n");
    }
    printf("difference of matrix is:\n");
    for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	  printf("%d ",d[i][j]);
	  printf("\n");
    }
    return 0;
}
