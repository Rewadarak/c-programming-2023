#include<stdio.h>>
int main()
{
	int i,j,n,k,y;
	printf("Enter length of array ");
	scanf("%d",&n);
	printf("Enter values of array ");
	int a[n];
	k=0;
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	     if(a[i]==a[j])
	      k++;
	    printf("The number of times %d is repeated is %d\n",a[i],k);
	    k=0;
	}
	return 0;
}
	   
