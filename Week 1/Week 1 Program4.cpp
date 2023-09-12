#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	float f;
	printf("Enter marks of 5 different subjects-\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("The percentage is %f %%",f);
	return 0;
}
