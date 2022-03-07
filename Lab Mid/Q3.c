#include<stdio.h>
int main(){
	int x,max=0,min;
	int i=1;
	printf("Enter Only Positive Decimal Numbers. Negative Numbers will be converted to positive.");
	printf("\nEnter %d Decimal: ",i);
	scanf("%d",&x);
	min=x;
	if(x<0)
		x*=-1;
        if(x<min)
		min=x;
		if(x>max)
		max=x;
	while(i<=4){
		printf("\nEnter %d Decimal: ",i);
		scanf("%d",&x);
		if(x<0)
		x*=-1;
        if(x<min)
		min=x;
		if(x>max)
		max=x;
		i++;
		
	}
		
		printf("\nMaximum Number: %d",max);
		printf("\nMinimum Number: %d",min);
	    
	    int sum=min+max;
	    
		int bin=0,pos=1,rem;
		while(sum!=0){
			rem=sum%2;
			bin=bin+(rem*pos);
			
			pos*=10;
			sum/=2;
		}
		printf("\nBinary: %d",bin);
		int one=0,zero=0;
		while(bin!=0)
		{
			rem=bin%10;
			if (rem%10==0)
			zero+=1;
			else if(rem%10==1)
			one+=1;
			bin/=10;
			

			
		}
		printf("\nNumber of 1: %d\nNumber of 0: %d",one,zero);
		
		return 0;
		
		

}
