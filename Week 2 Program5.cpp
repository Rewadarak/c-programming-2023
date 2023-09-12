#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	 printf("Equal");
	else
	 printf("Not equal");
	return 0;
}
