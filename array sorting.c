#include <stdio.h>
void main()
{
  int a[1000],l,i,j,x;
  printf("enter value for l:");
  scanf("%d",&l);
  printf("Enter the value for array : ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("The center element in array is:");
  for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    if(a[i]>a[j])
    {
     x=a[i];
     a[i]=a[j];
     a[j]=x;
    }
}
     printf("%d",a[i/2]);
}
