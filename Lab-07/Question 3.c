#include<stdio.h>
int main()
{
	int x,temp1,temp2;
	do{
		printf("\nEnter Five Digit Number: ");
		scanf("%d", &x);
		temp1=temp2=x;
	}while(!(x>9999 && x<=99999));
	int mod,sum=0;
	while(x!=0){
		mod=x%10;
		sum+=mod;;
		x/=10;	
			
	}
	
	if(sum%2==0)
	{
		int divisorscount=0;
		int i=temp1;
		i--;
		while(i>1){
			if(temp1%i==0)
			divisorscount++;
			i--;
		}
		if(divisorscount==0)
		printf("\n The Number Entered is a Prime Number.");
		else
		printf("\n The Number Entered is not a Prime Number.");
	}
	else if(sum%2==1){
		int a,b,c,d,e;
		a= temp2%10;
		b=(temp2%100)/10;
		c=(temp2%1000)/100;
		d=(temp2%10000)/1000;
		e=temp2/10000;
		
		if(a==e && b==d)
		printf("\n The Number Entered is a Palindrome.");
		else
		printf("\n The Number Entered is not a Palindrome.");
	}
	return 0;
}
