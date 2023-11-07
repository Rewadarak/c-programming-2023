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
	l--;
	printf("The reverse of the string is:");
	for(i=l;i>=0;i--)
	 printf("%c",c[i]);
	return 0;
}
