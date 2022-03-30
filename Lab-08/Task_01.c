#include<stdio.h>
int main(){
	int a[10],x;
    int i,j=0;
    for (i=0;i<10;i++){
    	printf("\nEnter Number %d: ",i+1);
    	scanf("%d",&a[i]);
	}
	printf("\nEnter The Number To Be Found: ");
	scanf("%d",&x);
	
	for(i=0;i<10;i++){
		if(x==a[i]){
		printf("\n\nThe Entered Number is: %d\nThe Number occurred at Index: %d",x,i);
		j++;
	}
}
	if(j==0)
	printf("\nNumber Not Found.");
	return 0;
	
}

