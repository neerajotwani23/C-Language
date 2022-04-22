#include<stdio.h>
int main(){
	int a,b;
	do{
	printf("Enter Range (for eg 3-10): ");
	scanf("%d-%d",&a,&b);
}while(a>b);
int i;
int temp=a;
for(i=1;i<=10;i++){
	
		
		for(a;a<=b;a++){
			if(a%2==1)
			printf("%d * %d = %d\t",a,i,a*i);
			
			
		}
		a=temp;
	
	
	printf("\n");
}
	
}
