#include<stdio.h>
int main()
{
	struct date
	{
		int dd,mm,yyyy;
	} d[2];
	int i;
	for( i=0 ; i<2 ; i++)
	{
		printf("\nEnter Date %d:\n",i+1);
		do
	    {
        	printf("\tEnter Date: ");
	    	scanf("%d",&d[i].dd);
	    }
	    while(d[i].dd<0 || d[i].dd>31);
	   	do
	    {
        	printf("\tEnter Month: ");
	    	scanf("%d",&d[i].mm);
	    }
	    while(d[i].mm<0 || d[i].mm>12);
	    do
	    {
        	printf("\tEnter Year: ");
	    	scanf("%d",&d[i].yyyy);
	    }
	    while(d[i].yyyy<1000 || d[i].yyyy>9999);
	}
	if(d[1].dd==d[0].dd && d[1].mm==d[0].mm && d[1].yyyy==d[0].yyyy)
	    printf("\nDates are Equal.");
	else
	    printf("\nDates are Unequal.");
	    
	return 0;

}
