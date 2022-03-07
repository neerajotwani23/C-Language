#include<stdio.h>
int main()
{
	float x,a,b,d;
	printf("Please Enter the purchasing cost: ");
	scanf("%f",&x);
	a=(x>=5000) ? ((x>=10000)? 0.1: 0.05 ): 0;       
	d=a;

	a=x*a;
	b=x-a;
	x=d*100;

	
	
	printf("\nYou are offered a %.2f%% discount, you have saved %.2f Rs on your purchase.\nKindly only pay %.2f Rs.",x,a,b);
	
}
