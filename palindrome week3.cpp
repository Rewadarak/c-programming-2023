#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,r,i,t,a;
	printf("Enter a value ");
	scanf("%d",&m);
	r=0;
	i=0;
	n=m;
	m=a;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	for(i=--i;m>0;i--)
	{
		t=m%10;
		r=r+t*pow(10,i);
		m=m/10;
	}
	if(r=a)
	 printf("it is a palindrome");
	else
	 printf("it is not palindrome");
	return 0;
}

