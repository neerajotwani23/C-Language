#include<stdio.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,x4,y4,s1,s2,s3;
	printf("Enter the coordinates of first point (x1,y1) ");
	scanf("%f %f",&x1,&y1);
	printf("Enter the coordinates of second point (x2,y2) ");
	scanf("%f %f",&x2,&y2);
	printf("Enter the coordinates of third point (x3,y3) ");
	scanf("%f %f",&x3,&y3);
	printf("Enter the coordinates of fourth point (x4,y4) ");
	scanf("%f %f",&x4,&y4);
	s1=(y2-y1)/(x2-x1);
	s2=(y3-y2)/(x3-x2);
	s3=(y4-y3)/(x4-x3);
	if(s1==s2==s3)
	printf("\nThe given points fall on a straight line!");
	else
	printf("\nThe given points do not fall on a straight line!");
	return 0;
}

