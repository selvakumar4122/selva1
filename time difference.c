#include <stdio.h>
void main()
{
int h1,m1,h2,m2,d1,d2;
printf("Enter the first time :");
scanf("%d%d",&h1,&m1);
printf("Enter the second time :");
scanf("%d%d",&h2,&m2);
d1=abs(h1-h2);
d2=abs(m1-m2);
printf("%d %d",d1,d2);
}
