#include<stdio.h>
#include<math.h>
int main()
{
	int g,r,b,d,t,h;
	printf("Enter basic salary and tier of place");
	scanf("%d%d",&b,&r);
	d=(44*b)/100;
	t=(8*b)/100;
	if(r==1)
	 h=27*b/100;
	else if(r==2)
	 h=24*b/100;
	else if(r==3)
	 h=16*b/100;
	else
	 h=12*b/100;
	g=b+h+t+d;
	printf("The total salary is %d",g);
	return 0;
}
