#include<stdio.h>>
int main()
{
	int i,j,n,k;
	printf("Enter length of array ");
	scanf("%d",&n);
	printf("Enter values of array ");
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	int b[n];
	for(i=0;i<n;i++)
	 b[i]=a[i];
	return 0;
}
