#include <stdio.h>
void main()
{
  int a[1000],n,i,j,t;
  printf("enter value for n:");
  scanf("%d",&n);
  printf("Enter the value for array : ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("The sorted array is:");
  for(i=0;i<n;i++)
{
     printf("%d\t%d",a[i],i);
     printf("\n");
}
}
