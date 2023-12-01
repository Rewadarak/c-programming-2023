#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,c;
	printf("Enter a string");
	char ch[100];
	scanf("%s",ch);
	c=strlen(ch);
	char *p[c];
	for(i=0;i<c;i++)
	 p[i]=ch+i;
	for(i=c;i>-1;i--)
	 printf("%c",*p[i]);
	return 0
	
}
