#include<stdio.h>
#include<math.h>
int main()
{
	float b, hypotenuse=1;
	int age;
	do{
		printf("Enter Your Age: ");
		scanf("%d",&age);
	}while(age<0);
	
	while(hypotenuse<age){
		b=(float)hypotenuse/(sqrt(2));
		printf("\nPythagorean Triplet %.0f: Hypotenuse= %.2f, Base= %.2f, Height= %.2f",hypotenuse,hypotenuse,b,b);
		hypotenuse++;
	}
}
