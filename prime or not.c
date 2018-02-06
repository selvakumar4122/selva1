#include <stdio.h>
void main()
{
   int a,i;
   printf("Enter the value for a:");
   scanf("%d",&a);
   for(i=2;i<=a;i++)
   {
   if(a%i==0)
   break;
   }
   if(a==i)
   printf("%d is a prime number",a);
   else
    printf("%d is a not prime number",a);

}
