#include <stdio.h>
void main()
{
    int a,b,c,sum=0;
    printf("enter valve for a:");
    scanf("%d",&a);
    b=a;
    while(a!=0)
{
    c=a%10;
    sum=sum+(c*c*c);
    a/=10;
}
if(b==sum)
printf("%d is armstrong number",b);
else
printf("%d is not armstrong number",b);
}
