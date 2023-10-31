#include<stdio.h>
int main()
{
	int i,j,n,k,y,m=0,l=0;
	printf("Enter length of array ");
	scanf("%d",&n);
	printf("Enter values of array ");
	int a[n];
	k=0;
	y=0;
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
	     k++;
	    else
	     y++;
	}
	int b[k];
	int c[y];
	for(i=0;i<n;i++)
	{
	    if(a[i]%2==0)
	    {
	    	b[l]=a[i];
	    	l++;
		}
	    else
	    {
	    	c[m]=a[i];
	    	m++;
		}
	}
	printf("The odd array is ");
	for(i=0;i<y;i++)
	 printf("%d ",c[i]);
	printf("\nThe even array is ");
	for(i=0;i<k;i++)
	 printf("%d ",b[i]);
	return 0;
}
	 

	
