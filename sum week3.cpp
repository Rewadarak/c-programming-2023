#include<stdio.h>
int main()
{
	int n,i,s;
	printf("Enter a number\n");
	scanf("%d",&n);
	s=0;
	i=1;
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	printf("The sum of %d natural numbers is %d",n,s);
	return 0;
}
