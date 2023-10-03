#include<stdio.h>
int main()
{
	int i,j,n,s,u;
	n=5;
	for(i=0;i<n;i++)
	 {
	 	for(s=0;s<i;s++)
	 	 printf(" ");
	 	for(j=0;j<1;j++)
	 	 printf("+");
	 	for(u=0;u<2*n-2*i-3;u++)
	 	 printf("_");
	 	for(j=0;j<1;j++)
	 	 printf("+");
	 	printf("\n");
	 }
	 
	return 0;
}
