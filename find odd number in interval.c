#include <stdio.h>
void main()
{
   int a,b,i;
   printf("Enter the value for a,b:");
   scanf("%d\t%d",&a,&b);
   for(i=a+1;i<=b;i++)
   {if(i%2==1)
     printf("%d",i);
     printf("\t");
   }
}
