#include<stdio.h>>
int main()
{
	int i,j,n,k,y;
	printf("Enter length of array ");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter a number");
	scanf("%d",&k);
	printf("Enter values of array ");
	for(i=0;i<n+1;i++)
	{
		if(i==n)
		 a[i]=k;
		else
		 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
     for(j=0;j<n-i;j++)
      if(a[j]>a[j+1])
      {
          a[j]=a[j+1]+a[j];
          a[j+1]=a[j]-a[j+1];
          a[j]=a[j]-a[j+1];
      }
    for(i=0;i<n+1;i++)
     printf("%d ",a[i]);
    return 0;
}
