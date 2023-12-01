#include<stdio.h>
 int main()
 {
 	FILE *input,*output;
 	input=fopen("DOC1.txt","r");
 	output=fopen("DOC2.txt","a");
 	
 	char s;
 	s=fgetc(input);
 	while(s!=EOF)
 	{
 		fputc(s,output);
 		s=fgetc(input);
	}
 	fclose(input);
 	fclose(output);
 	return 0;
 }
