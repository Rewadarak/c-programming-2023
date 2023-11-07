#include<stdio.h>
int main()
{
	int i,l,n;
	printf("Enter length of string ");
	scanf("%d",&n);
	char c[n+1];
	printf("Enter string ");
	for(i=0;i<n+1;i++)
	 scanf("%c",&c[i]);
	l=0;
	i=0;
	char b[n+1];
	while(c[i]!='\0')
	{
		b[i]=c[i];
		i++;
	};
	printf("The new string is:");
	for(i=0;i<n+1;i++)
	 printf("%c",b[i]);
	return 0;
}
