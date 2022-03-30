#include<stdio.h>
int main(){
	int array[10];
	int a,b;
	do{
	printf("Enter Range (for eg 3-10): ");
	scanf("%d-%d",&a,&b);
}while(a<0 || b<a);
int temp1=a;
int x=0;
while(temp1<=b){

int divisorscount=0;
		int i=temp1;
		i--;
		while(i>1){
			if(temp1%i==0)
			divisorscount++;
			i--;
		}
		if(divisorscount==0)
		{array[x]=temp1;
		x++;
}
temp1++;
if(temp1>b)
break;
}
int j;
	for(j=x-1;j>=0;j--){
		printf("\nArray Element having index %d is %d",j,array[j]);
	}
	return 0;
}
