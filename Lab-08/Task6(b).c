#include<stdio.h>
#include <stdlib.h>

int main(){
	int n,i;
	do{
		printf("Enter Number Of Intergers: ");
		scanf("%d",&n);
	}while(n<0);
	float array[n],sum=0;
	for(i=0;i<n;i++){
		array[i]=((float)rand()/(float)(RAND_MAX));
		printf("\nArray Elements are = %f",array[i]);
		sum+=(float)array[i];
	}
	printf("\nAvg = %f",(float)(sum/n));
	printf("\nSum is = %f",sum);
}
