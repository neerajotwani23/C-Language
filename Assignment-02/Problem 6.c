#include<stdio.h>
int main()
{
	int a,b,r,s;
	printf("Enter a five digit positive integer: ");
	scanf("%d",&a);
	b=a;
	if (a>9999 && a<100000){
		while(a!=0){
			r=a%10;
			s=(s*10)+r;
			a=a/10;
			
			
		}
		if(b==s)
		printf("\nIt is a palindrome");
		else
		printf("\nIt is not a palindrome");
		
	}
	else
	printf("\nError! Invalid Input. Plz try again");
}
