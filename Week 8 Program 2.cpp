#include<stdio.h>
 int main()
 {
 	FILE *fp,*odd,*even,*fp1;
 	int n,i;
 	fp=fopen("Z:/Week 8/DATA.txt","w");
 	odd=fopen("Z:/Week 8/ODD.txt","w");
 	even=fopen("Z:/Week 8/EVEN.txt","w");
 	int a[10];
 	printf("Enter data ");
 	for(i=0;i<10;i++)
 	 scanf("%d",&a[i]);
 	
 	for(i=0;i<10;i++)
 	 fprintf(fp,"%d ",a[i]);
 	
 	fp1=fopen("Z:/Week 8/DATA.txt","r");
 	
    for(i=0;i<10;i++)
     {
     	fseek(fp,i,0);
     	fscanf(fp1,"%d",&n);
     	if(n%2==0)
     	{
		  fprintf(even,"%d",n);
		  printf("%d",n);
	    }
		else
		{
		 fprintf(odd,"%d",n);
		 printf("%d",n);
	    }
	 }

 	fclose(fp);
 	return 0;
 }
