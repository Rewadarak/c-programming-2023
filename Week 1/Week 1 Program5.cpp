#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 values\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are %d & %d",a,b);
	return 0;
}
