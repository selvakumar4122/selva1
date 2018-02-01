#include <stdio.h>
void main()
{
  int a,b,c,d;
  printf("enter value for a:");
  scanf("%d",&a);
  b=a;
  while(b!=0)
  {
      d=b%10;
      c=c*10+d;
      b=b/10;
  }
  if(a==c)
  printf("enter value palindrome:");
  else
  printf("enter value is not palindrome:");
}
  
