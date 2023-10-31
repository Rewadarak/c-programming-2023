#include<stdio.h>>
int main()
{
	int i,j,n,k,y;
	printf("Enter length of array ");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter a number to be inserted and location");
	scanf("%d%d",&k,&y);
	printf("Enter values of array ");
	for(i=0;i<n+1;i++)
	{
		if(i==(y-1))
		 a[i]=k;
		else
		 scanf("%d",&a[i]);
	}
    for(i=0;i<n+1;i++)
     printf("%d ",a[i]);
    return 0;
}
