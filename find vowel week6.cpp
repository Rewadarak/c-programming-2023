//not working//
#include<stdio.h>

int main()
{
	int i,j,n,k;
	printf("Enter length of array ");
	scanf("%d",&n);
	printf("Enter values of array ");
	int a[n];
	scanf("%s",a);
	for(i=0;i<n;i++)
	 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
	  printf("%c",&a[i]);
	return 0;
}
