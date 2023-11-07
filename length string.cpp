#include<stdio.h>
int main()
{
	int i,l,n;
	char c[100000];
	printf("Enter string ");
	scanf("%s",c);
	l=0;
	i=0;
	while(c[i]!='\0')
	{
		l++;
		i++;
	}
	printf("The length of the string is %d ",l);
	return 0;
}
