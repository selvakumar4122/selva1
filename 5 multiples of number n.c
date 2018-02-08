
#include <stdio.h>
void main()
{
  int n,i,c=1,sum;
  printf("enter value for n:");
  scanf("%d",&n);
  for(i=0;i<5;i++)
     {
      sum=c*n;
      printf("%d\t",sum);
      ++c;
     }
}
  
