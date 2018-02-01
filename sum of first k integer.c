#include <stdio.h>
void main()
{
  int a[100],n,k,i,c=0;
  printf("enter value for n:");
  scanf("%d",&n);
  printf("enter the values:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter how many integer to sum:");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
      c=c+a[i];
  }
  printf("The sum of first %d integers are:%d",k,c);
}
  

