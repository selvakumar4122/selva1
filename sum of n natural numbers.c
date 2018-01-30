#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the values for n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   printf("sum of %d natural numbers=%d",n,sum);
}
