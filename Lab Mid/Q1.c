#include<stdio.h>
int main(){
	int qty,choose,exit,price=0;
	do{
	printf("\n\t\tJava to Go Coffee Shop");
		printf("\n1. Tea Categories\n2.Coffee Categories\nChoose 1 to 2");
		int num;
		scanf("%d",&num);
		if(num==1)
		{
			printf("\nItem\tPrice\n1. Green Tea\tRs.20\n2.Milk Tea\tRs.50");
			printf("\nEnter the Quantity Of Green Tea ");
			scanf("%d",&qty);
			price+=(qty*20);
			printf("\nEnter the Quantity Of Milk Tea ");
			scanf("%d",&qty);
			price+=(qty*50);
			
		}
		if(num==2){
			printf("\nItem\tPrice\n1. Expresoo\tRs.100\n2.Double Expresoo\tRs.150");
			printf("\nEnter the Quantity Of Expresoo ");
			scanf("%d",&qty);
			price+=(qty*100);
			printf("\nEnter the Quantity Of Double Expresoo ");
			scanf("%d",&qty);
			price+=(qty*150);
			
		}
		printf("\nDo You Want To Continue?\nEnter 1 for Yes and 0 for No ");
		scanf("%d",&exit);
	}while(exit!=0);
	printf("Total Bill is : %d Ruppees",price);
	return 0;

}
