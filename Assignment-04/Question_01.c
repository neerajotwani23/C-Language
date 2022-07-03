#include<stdio.h>

struct functions
{
	float avg,per;
};

struct functions func(float x1,float x2,float x3,float total)
{
	struct functions a;
	a.avg = (x1+x2+x3)/3;
	a.per = ((x1+x2+x3)/total)*100;
	return a;
}

int main()
{
	float s1,s2,s3,tot;
	
	do
	{
		printf("Enter Marks Obtained In Subject 1: ");
		scanf("%f",&s1);
	}
	while(s1<0);
	
	do
	{
		printf("Enter Marks Obtained In Subject 2: ");
		scanf("%f",&s2);
	}
	while(s2<0);
	
	do
	{
		printf("Enter Marks Obtained In Subject 3: ");
		scanf("%f",&s3);
	}
	while(s3<0);
	
	do
	{
		printf("Enter Total Marks: ");
		scanf("%f",&tot);
	}
	while(tot<(s1+s2+s3));
	
	struct functions b;
	
	b=func(s1,s2,s3,tot);
	printf("\n\nAverage: %.2f\nPercentage: %.2f",b.avg,b.per);
	
	return 0;
}
