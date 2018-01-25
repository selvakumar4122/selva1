#include<stdio.h>
void main()
{
    char a;
    printf("Enter the character for a:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("the character is vowel");
        else
        printf("the  character is consonant");
}

