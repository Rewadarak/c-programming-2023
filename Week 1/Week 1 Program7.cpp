#include<stdio.h>
int main()
{
	float a,b,c;
	int d;
	printf("Enter two numbers\n");
	scanf("%f%f",&a,&b);
	c=a*b;
	d=a*b;
	printf("The multiplication of the 2 numbers in integer value is %d\n",d);
	printf("The multiplication of the 2 numbers in float value is %f",c);
	return 0;
}
