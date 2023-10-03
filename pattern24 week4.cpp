#include<stdio.h>
int main()
{
	int i,j,n,s,u;
	n=5;
	for(i=0;i<n;i++)
	 {
	 	for(s=0;s<i;s++)
	 	 printf(" ");
	 	for(j=0;j<2*n-2*i-1;j++)
	 	{
	 	 if(j==0||j==2*n-2*i-2)
	 	  printf("+");
	 	 else
	 	  printf("_");
	    }
	 	printf("\n");
	 }
	 
	return 0;
}
