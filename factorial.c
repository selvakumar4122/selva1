#include <stdio.h>
void main()
{
    int a,i,c=1;
    printf("Enter the numbers: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     c=c*i; 
    }
    printf("Factorial of %d is : %d ",a,c);
 }
