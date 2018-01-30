#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the values for a,b,c:");
    scanf("%d%d%d",&a,&b,&c); 
   if(a>b&&a>c)
        printf("The value %d is grater",a);
   else if(b>c)
        printf("the value %d is gratter",b);
    else
         printf("the value %d is gratter",c);
}
