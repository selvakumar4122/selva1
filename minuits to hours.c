#include <stdio.h>
void main()
{
    int mins,hour=0;
    printf("Enter the minuits :");
	scanf("%d",&mins);
	if(mins<60)
	{
	    printf("%d Hours %d minuits",hour,mins);
	}
	else 
	{
	    hour=mins/60;
	    mins=mins%60;
	   	printf("%d Hours %d minuits",hour,mins);
	}
}
