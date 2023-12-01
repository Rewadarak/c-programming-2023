#include<stdio.h>
 int main()
 {
 	FILE *input,*output,*print;
 	input=fopen("Z:/Week 8/INPUT.txt","r");
 	output=fopen("Z:/Week 8/OUTPUT.txt","w");
 	char s;
 	s=fgetc(input);
 	while(s!=EOF)
 	{
 		fprintf(output,"%c",s);
 		s=fgetc(input);
	}
	fclose(output);
	char c;
	print=fopen("Z:/Week 8/OUTPUT.txt","r");
	c=fgetc(print);
 	while(c!=EOF)
 	{
 		printf("%c",c);
 		c=fgetc(print);
	}
 	fclose(input);
 	fclose(print);
 	return 0;
 }
