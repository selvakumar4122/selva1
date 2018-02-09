#include <stdio.h>
void main()
{
  int n,i,a,b,t=0;
  printf("enter value for n,a,b:");
  scanf("%d%d%d",&n,&a,&b);
  for(i=0;i<n;i++)
{
     t=t+(a+i*b);
}
     printf("Arithmetic progression %d",t);
}
  
