#include<stdio.h>
int main()
{
	int i,j,n,a;
	n=4;
	a=1;
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-i;j++)
	 	 printf("%d ",a++);
	 	printf("\n");
	 }
	return 0;
}
