#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter even leghth of array\n");
    scanf("%d",&n);
    printf("Enter values of array\n");
    int a[n];
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n-1;i+=2)
      {
          a[i]=a[i+1]+a[i];
          a[i+1]=a[i]-a[i+1];
          a[i]=a[i]-a[i+1];
      }
    printf("The new array order is\n");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0;
}
