#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	 printf("A is greater");
	else if(b>c && b>a)
	 printf("B is greater");
	else
	 printf("C is greater");
	return 0;
}
