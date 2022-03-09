//C-Script To generate Fabonacci Series
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int year,id,spn;
	printf("Enter Your Birth Year: ");
	scanf("%d",&year);
	if (!(year>999 && year<=9999)){
		printf("\nInvalid Birth Year!!!");
		exit (0);
	}
	printf("\nEnter Your Four Digit Student ID: ");
	scanf("%d",&id);
	if (!(id>999 && id<=9999)){
		printf("\nInvalid Student ID!!!");
		exit (0);
    }
    spn=5;
    int n;
    n= year/1000 + id%10 + pow(2,spn);
    
    int first=0;
    int second=1;
    int i;
    int sum;
    printf("\n%d,",first);
    printf(" +%d",second);
    
    while(i<=n-3){
    	sum=(long long int)first+second;
    	
    	printf(", +%lld",sum);
    	first=(long long int)second;
    	second=(long long int)sum;
    	i++;
	}
	return 0;
	
}
