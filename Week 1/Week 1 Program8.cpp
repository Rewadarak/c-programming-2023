#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter kilometeres\n");
	scanf("%f",&a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("That is equal to %f meters\n",b);
	printf("That is equal to %f centimeters\n",c);
	printf("That is equal to %f milimeters\n",d);
	return 0;
}
