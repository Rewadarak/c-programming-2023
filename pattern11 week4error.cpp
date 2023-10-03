#include<stdio.h>
int main()
{
	int i,j,n,s,t;
	n=10;
	t=0;
	for(i=0;i<n;i++)
	 {
		for(s=0;s<i;s++)
	 	 printf(" ");
	 	if(s>n/2)
	 	 for(s=0;s<n-i-1;s++)
	 	 {
	 	  printf(" ");
	 	  t++;
	     }
	 	else;
	 	for(j=0;j<n/2-i;j++)
	 	 printf("+");
	 	if(j>n/2-i)
	 	 for(j=0;j<t;j++)
	 	  printf("+");
	 	else;
	 	printf("\n");
	 }
	return 0;
}
