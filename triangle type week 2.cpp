#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter length of sides of the triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	 printf("It is an equilateral triangle");
	else if((a==b && b!=c) ||(a==c && b!=c) ||(c==b && b!=a))
	 printf("it is an iscosceles triangle");
	else
	 printf("it is a scalene triangle");
	return 0;
}
