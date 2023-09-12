#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,si,ci,n,x,y,z;
	printf("Enter principle amount, rate of interest, time period and number of time periods:");
	scanf("%f\n%f\n%f\n%f\n",&p,&r,&t,&n);
	si=(p*r*t)/100;
	x=r/n;
	y=n*t;
	z=x++;
	ci=p*(pow(z,y));
	printf("The simple interest will be %f\n",si);
	printf("The amount after compound interest will be %f",ci);
	return 0;
}
