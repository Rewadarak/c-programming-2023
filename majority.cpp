#include<stdio.h>>
int main()
{
	int i,j,n,k,y;
	printf("Enter length of array ");
	scanf("%d",&n);
	printf("Enter values of array ");
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	k=0;
	y=0;
	for(i=0;i<n-1;i++)
	 for(j=0;j<n-i-1;j++);
	  if(a[j]>a[j+1])
	 	{
	 	    a[j]=a[j]+a[j+1];
	 		a[j+1]=a[j]-a[j+1];
	 		a[j]=a[j]-a[j+1];
	 		
		 }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	     if(a[i]==a[j])
	      k++;
	    if(k>n/2)
	    {
	     printf("%d is the majority",a[i]);
	     break;
	    }
	    else
	     y++;
	    k=0;
	}
	if(y>=n/2)
	 printf("no majority");
	return 0;
}

