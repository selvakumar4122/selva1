#include<stdio.h>
void main()
{
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
   if(a%4==0)
   {
        printf("The year is leap year");
   }
   else 
    {
        printf("The year is not leap year");
   }
}
