#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter a number\n");
	scanf("%d",&n);
	m=1;
	i=1;
	while(i<=n)
	{
		m=m*i;
		i++;
	}
	printf("The factorial of %d natural numbers is %d",n,m);
	return 0;
}
