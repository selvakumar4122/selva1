#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the values for a,b,c:");
    scanf("%d%d%d",&a,&b,&c); 
   if(a>=b&&a>=c)
        printf("The value of a is grater");
    if(b>=a&&b>=c)
        printf("the value b is gratter");
    if(c>=a&&c>=b)
         printf("the value c is gratter");
}
