#include<stdio.h>
 int main()
 {
 	FILE *fp1,*fp2;
 	fp1=fopen("Z:/Week 8/DOC1.txt","r");
 	fp2=fopen("Z:/Week 8/DOC2.txt","r");
 	char s,c;
 	int k;
 	s=fgetc(fp1);
 	c=fgetc(fp2);
 	while(s!=EOF)
 	{
 		if(s!=c)
 		{
 			k=0;
 			break;
		}
		else
		 k=1;
 		s=fgetc(fp1);
 		c=fgetc(fp2);
	}
	printf("%d\n",k);
	if(k==0)
	 printf("File is not equal");
	else
	 printf("File is equal");
 	fclose(fp1);
 	fclose(fp2);
 	return 0;
 }
