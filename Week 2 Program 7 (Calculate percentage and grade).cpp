#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter your marks in physics, chemistry, biology, mathematics and computer: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("Your percentage is %d%%\n",f);
	if(f>=90)
	 printf("Your have recieved grade A");
	else if(f>=80)
	 printf("Your have recieved grade B");
	else if(f>=70)
	 printf("Your have recieved grade C");
	else if(f>=60)
	 printf("Your have recieved grade D");
	else if(f>=50)
	 printf("Your have recieved grade E");
	else
	 printf("Your have recieved grade F");
	return 0;
}
