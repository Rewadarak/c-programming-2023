#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,r,i,t,b;
	printf("Enter a value ");
	scanf("%d",&m);
	r=0;
	i=0;
	n=m;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	t=m%10;
	b=pow(10,--i);
	r=m%b;
	printf("the sum of the last and first digit of the given number is %d",r+t);
	return 0;
}

