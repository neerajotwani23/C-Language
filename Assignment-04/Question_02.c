#include<stdio.h>
int sum=0;
int rec(int x)
{
	sum+=x % 10;
	if(x==0)
		return sum;
	else 
	    sum=rec(x/10);
	return sum;
}

int main()
{
	int x,sum;
	printf("Enter an Integer: ");
	scanf("%d",&x);
	if(x<0)
	x*=(-1);
	sum= rec(x);
	printf("The Sum of digits is %d",sum);
}
