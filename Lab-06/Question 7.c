#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Second Number: ");
	scanf("%d",&b);
	printf("Enter Third Number: ");
	scanf("%d",&c);
	printf("Enter Fourth Number: ");
	scanf("%d",&d);
	printf("Enter Fifth Number: ");
	scanf("%d",&e);
	printf("Enter Sixth Number: ");
	scanf("%d",&f);
	printf("Enter Seventh Number: ");
	scanf("%d",&g);
	printf("Enter Eighth Number: ");
	scanf("%d",&h);
	printf("Enter Nineth Number: ");
	scanf("%d",&i);
	printf("Enter Tenth Number: ");
	scanf("%d",&j);
	if(a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j )
	printf("\nThank you, Your input is in order.");
	else
	printf("\nNOT COOL");
	
	return 0;
	
	
	
}
