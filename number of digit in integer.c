#include <stdio.h>
void main()
{
  int a,i,c=0;
  printf("enter value for a:");
  scanf("%d",&a);
  for(i=0;a!=0;i++)
  {
     a/=10;
     c=c+1;
  }
  printf("the number of digits in integer:%d",c);
}
  
