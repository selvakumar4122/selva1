#include <stdio.h>
#include <math.h>
void main()
{
    int a,b, i, temp1, temp2, remainder, n = 0, result = 0;
    printf("Enter two numbers a,b: ");
    scanf("%d %d",&a, &b);
    printf("Armstrong numbers between %d an %d are: ",a,b);
    for(i =a+1;i<b;++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i) 
        {
            printf("%d ", i);
        }
        n=0;
        result =0;
    }
}

