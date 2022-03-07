#include <stdio.h>
 int main()
{
	int a,b,r,c;
	printf("Enter 4 digit positive integer: ");
    scanf("%d",&a);
    if(a>999 && a<10000){
    	printf("Enter last digit of your roll number: ");
	    scanf("%d",&b);
	    if(a%10==b){
	    	while(a > 0)
		{
			r = a%10;
			if(r == b)
			c=c+1;
		    a /= 10;
		}
		printf("\n%d occured %d times!",b,c);
		}
		else
		printf("\nInvalid Last digit!");
    	
	}
	else
	printf("Invalid input! Execute again and input a valid integer!");
	
    return 0;
}
