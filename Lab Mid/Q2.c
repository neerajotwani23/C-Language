#include<stdio.h>
int main(){
	int n,run;
	int cost;
	do{
		printf("Enter Number Of Ice-creams: ");
		scanf("%d",&n);
	}while(n<0);
	do{
		printf("For How many hours do you want to run the plant (For 8 enter 0 and for 16 enter 1): ");
		scanf("%d",&run);
	}while(run!=0 && run!=1);
	int costper1=60,perhour=50;
	int hours=n/perhour;
	
	float additional,regular,days;
	if(run==0){
		cost=costper1*n;
		days=(float)hours/8;
	}
	else if(run==1)
	{
		n/=2;
		cost= costper1*n*2 +costper1*n;
		days=(float)hours/16;
	}
	printf("Cost=%d Ruppees\nHours=%d\nDays=%.2f",cost,hours,days);
	return 0;

	
}
