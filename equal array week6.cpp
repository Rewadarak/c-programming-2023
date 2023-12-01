#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,d;
	printf("Enter string 1 ");
	char a[100];
	scanf("%s",a);
	char b[100];
	printf("Enter string 2 ");
	scanf("%s",b);
	d=strcmp(a,b);
	if(d==0)
	 printf("EQUAL");
	else
	 printf("NOT EQUAL");
	return 0;
}
