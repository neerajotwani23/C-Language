#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Five Digit Number: ");
	scanf("%d",&x);
	if(x<0)
	x=-1*x;
	if(x>9999 && x<100000)
	{
		int a,b,c,d,e;
		a=x%10;
		b=(x%100)/10;
		c=(x%1000)/100;
		d=(x%10000)/1000;
		e=x/10000;
		
		x=a+b+c+d+e;
		printf("\n%d",x);
		
	}
	else
	printf("\nInvalid Input");
}
