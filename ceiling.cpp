#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,k;
    printf("Enter leghth of array\n");
    scanf("%d",&n);
    printf("Enter values of array\n");
    int a[n];
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter a value");
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
     for(j=0;j<n-i-1;j++)
      if(a[j]>a[j+1])
      {
          a[j]=a[j+1]+a[j];
          a[j+1]=a[j]-a[j+1];
          a[j]=a[j]-a[j+1];
      }
    for(i=0;i<n;i++)
    {
      if(a[i]>k)
        break;
      if(a[i]==k)
      {
      	i++;
      	break;
	  }
    }
    printf("The ceiling is %d",a[i]);
    return 0;
}
 
