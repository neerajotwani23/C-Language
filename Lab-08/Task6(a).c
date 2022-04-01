#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n;
	do{
		printf("Enter Number Of Intergers: ");
		scanf("%d",&n);
	}while(n<0);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("Enter Element a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(i==ceil(n/2)+1){
			printf("\nArray Is Symmetric.");
			exit (1);
		}
		if(a[i]!=a[n-i-1])
		break;
	}
	printf("Array Is Not Symmetric.");	
	return 0;
}
