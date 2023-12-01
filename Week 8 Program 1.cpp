 #include<stdio.h>
 int main()
 {
 	FILE *fp;
 	fp=fopen("Z:/Week 8/INPUT.txt","w");
 	char s[50];
 	char str[50];
 	printf("Enter data ");
 	scanf("%[^\n]s",s);
 	fprintf(fp,"%s",s);
 	printf("Stored data is:");
 	FILE *fp1;
 	fp1=fopen("Z:/Week 8/INPUT.txt","r");
 	fscanf(fp1,"%s",s);
 	printf("%s",s);
 	fclose(fp);
 	return 0;
 }
