#include <stdio.h>

int main()
{
	int AC,n;
	float inib,charges,sum,credit,creL,finb,limitcross;
	printf("Enter account number (-1 to end): ");
	scanf("%d", &AC);
    printf("Enter beginning balance: ");
	scanf("%f", &inib);	
	
	while(inib < 0)
	{
		printf("Balance cannot be negative! \n");
		printf("Enter beginning balance: ");
		scanf("%f", &inib);
	}
	printf("How many products would you like to enter: ");
	scanf("%d", &n);	
	
	while(n <= 0)
	{
		printf("No of products cannot be negative! \n");
		printf("How many products would you like to enter: ");
		scanf("%d", &n);
	}
	printf("\n");
	int i;
	for(i = 1; i <= n; i++)
	{
		printf("Enter charges for item %d: ", i);
		scanf("%f", &charges);
		if(charges <= 0)
		{
			printf("Charges can not be negative or zero!\n");
			i--;
		}
		sum += charges; 
	}
	printf("\nYour Total: %.2f\n", sum);
	printf("Enter total credits: ");
	scanf("%f", &credit);	
	while(credit < 0)
	{
		printf("total credits cannot be negative! \n");
		printf("Enter total credits: ");
		scanf("%f", &credit);
	}
	printf("Enter credit limit: ");
	scanf("%f", &creL);	
	
	while(creL < 0)
	{
		printf("credit limit cannot be negative! \n");
		printf("Enter credit limit: ");
		scanf("%f", &creL);
	}
	
	finb = inib+sum-credit;
	printf("\nAccount: %d \tCredit Limit: %.2f \tBalance: %.2f", AC, creL, finb);
	
	if(finb > creL)
	{
		limitcross = finb - creL;
		printf("\nCredit limit exceeded by %.2f", limitcross);
	}
	else
	{
		printf("\nCredit limit not exceeded!");
	}
	return 0;
}
