#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value for a:");
    scanf("%d",&a);
    if(a<=0)
    {
        if(a<0)
        printf("the value is negative");
        else
        printf("the value is zero");
    }
    else
     printf("the value is positive");
}

