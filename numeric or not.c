#include <stdio.h>
#include<string.h>
void main() 
{
char a[100];
int n,i,c=0;
printf("enter the string:");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a>='0'||a<='9')
c++;
}
if(c==n)
printf("yes");
else
printf("no");
}
