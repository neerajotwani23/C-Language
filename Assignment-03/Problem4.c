#include<stdio.h>
int main()
{
	float t1,t2,t;
	printf("Enter The Time in minutes Taken By body having larger circumference: ");
	scanf("%f",&t1);
	printf("\nEnter The Time in minutes Taken By body having smaller circumference: ");
	scanf("%f",&t2);
	
	t=(float)(t1*t2)/(t1-t2);
	printf("\nBoth Cars will meet each after %.2f minutes.",t);
	return 0;
}
