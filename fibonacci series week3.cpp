#include<stdio.h>
int main()
{
	int a=0,b=1,s,n,i;
	printf("Enter a value\n");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=2; i<n; i++)
	{
		s=a+b;
		a=b;
		b=s;
		printf("%d ",s);
	}
	return 0;
}
