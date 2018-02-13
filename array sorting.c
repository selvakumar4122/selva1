#include <stdio.h>
void main()
{
  int a[1000],n,i,j,t;
  printf("enter value for n:");
  scanf("%d",&n);
  printf("Enter the value for array : ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("The median element in array is:");
  for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
}
     printf("%d",a[i/2]);
}
