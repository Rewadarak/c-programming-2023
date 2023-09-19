#include<stdio.h>
int main()
{
	int n,i=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	printf("The length of number is %d",i);
	return 0;
}
