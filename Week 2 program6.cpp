#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter points given to the 3 techniques\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	 printf("%d is greater",a);
	else if(b>c && b>a)
	 printf("%d is greater",b);
	else
	 printf("%d is greater",c);
	return 0;
}
