#include<stdio.h>
float f(int,int);
int main()
{
	int i,n,k=0;
	printf("Enter length of array ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array ");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	 k=k+a[i];
	float b;
	b=f(k,n);
	printf("The average is %f",b);
	return 0;
}
float f(int x,int y)
{
	float z;
	z=float(x)/y;
	return z;
}
