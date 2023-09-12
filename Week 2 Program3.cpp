#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter amount of watts used in a month\n");
	scanf("%d",&a);
	if(a<=1000)
	 b=20;
	else if(a<=5000 && a>1000)
	 b=35;
	else
	 b=75;
	c=a*b;
	printf("The total bill for electricity is %d",c);
	return 0;
}
