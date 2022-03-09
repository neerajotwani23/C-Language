#include<stdio.h>
int main()
{
	int age;
	char area;
	do{
		printf("Enter Your Age: ");
		scanf("%d",&age);
	}while(age<0);
	
	do{
		printf("Do You Belong To Urban Area? (Y or N) ");
		scanf(" %c",&area);
	}while(area!='Y' && area!='y' && area!='N' && area!='n');
	
	if(age>=18 && (area=='Y' || area=='y'))
	printf("\nYOU ARE ELIGIBLE FOR A VACCINATION.");
	else
	printf("\nYOU ARE NOT ELIGIBLE FOR A VACCINATION.");
	
	return 0;
}
