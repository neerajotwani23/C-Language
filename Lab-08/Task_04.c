#include<stdio.h>
int main(){
	int a[10],i,j,min,max;
	char order;
	for (i=0;i<10;i++){
    	printf("\nEnter Number %d: ",i+1);
    	scanf("%d",&a[i]);
	}
	do{
		printf("\nFor Ascending Order Enter A , For Descending Order Enter D : ");
		scanf(" %c",&order);
	}while(order!='a' && order!='A' && order!='d' && order!='D');
	
	for(i=1;i<10;i++){
		for(j=0;j<10;j++){
			if(order=='d' || order=='D'){
				
				if(a[i]>a[j]){
				   max=a[i];
				   a[i]=a[j];
				   a[j]=max;
			}
				
			}
			if(order=='a' || order=='A'){
				if(a[i]<a[j]){
				min=a[i];
				a[i]=a[j];
				a[j]=min;
				}
				
			}
		}
		
	}
	printf("\nSorted Array: ");
	for (i=0;i<10;i++){
    	printf(" %d",a[i]);
    	
	}
	return 0;
	
}
