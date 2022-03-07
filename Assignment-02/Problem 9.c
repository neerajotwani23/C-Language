#include <stdio.h>

int main()
{
	int x,bi,r;
	int  p = 1;
	
	printf("Enter the last 2 digits of your roll number: ");
	scanf("%d", &x);
	
	int y=x;
	
	if(x>9 && x<100)
	{
		while(y > 0)
		{
			r = y % 2;
			y = y / 2;
			bi= bi+ (r*p);
			p= p*10;
		}
		printf("The bi equivalent of %d is %d", x, bi);
		
		r = 0;
		int d;
		
		y=bi;
		while(bi > 0)
		{
			r = bi % 10;
			d = d+ r*p;
			bi= bi/10;
			p = p*2;
		}
		printf("\nThe decimal equivalent of %d is %d", y, x);
	}
	else
	{
		printf("Invalid input. Please try again!");
	}
	
	return 0;
}
