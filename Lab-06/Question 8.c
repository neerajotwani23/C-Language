#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("Enter First Number: ");
	scanf("%d",&a);
	if(a<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Second Number: ");
	scanf("%d",&b);
		if(b<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Third Number: ");
	scanf("%d",&c);
		if(c<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Fourth Number: ");
	scanf("%d",&d);
		if(d<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Fifth Number: ");
	scanf("%d",&e);
		if(e<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Sixth Number: ");
	scanf("%d",&f);
		if(f<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Seventh Number: ");
	scanf("%d",&g);
		if(g<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Eighth Number: ");
	scanf("%d",&h);
		if(h<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Nineth Number: ");
	scanf("%d",&i);
		if(i<0){
	printf("\nNOT COOL");
	exit (1);
}
	printf("Enter Tenth Number: ");
	scanf("%d",&j);
		if(j<0){
	printf("\nNOT COOL");
	exit (1);
	}
	int min,max;
	
	if(a>b)
	max=a;
	else
	max=b;
	
	if(max>c)
	max=max;
	else
	max=c;
	
	if(max>d)
	max=max;
	else
	max=d;
	
	if(max>e)
	max=max;
	else
	max=e;
	
	if(max>f)
	max=max;
	else
	max=f;
	
	if(max>g)
	max=max;
	else
	max=g;
	
	if(max>h)
	max=max;
	else
	max=h;
	
	if(max>i)
	max=max;
	else
	max=j;
	
	if(max>j)
	max=max;
	else
	max=j;
	
	if(a>b)
	min=b;
	else
	min= a;
	
	if(min>c)
	min=c;
	else
	min=min;
	
	if(min>d)
	min=d;
	else
	min=min;
	
	if(min>e)
	min=e;
	else
	min=min;
	
	if(min>f)
	min=f;
	else
	min=min;
	
	if(min>g)
	min=g;
	else
	min=min;
	
	if(min>h)
	min=h;
	else
	min=min;
	
	if(min>i)
	min=i;
	else
	min=min;
	
	if(min>j)
	min=j;
	else
	min=min;	
	
	if(max%2==0)
	printf("\nThe maximum number is %d and it is an Even Number.",max);
	else
	printf("\nThe maximum number is %d and it is an Odd Number.",max);
	
	if(min%2==0)
	printf("\nThe minimum number is %d and it is an Even Number.",min);
	else
	printf("\nThe minimum number is %d and it is an Odd Number.",min);
	
	return 0;
	
	
	
	

	
	
	

}
