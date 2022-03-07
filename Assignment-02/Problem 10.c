#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	printf("Enter a Four Digit Integer: ");
	scanf("%d",&a);
	if(a>999 && a<10000){
		b=(a%10 +5)%8;
		c=((a%100)/10 +5)%8;
		d=((a%1000)/100 + 5)%8;
		e=(a/1000 +5)%8;
		f=d*1000 + e*100 + b*10 +c;
		printf("\nThe encrypted integer is %d",f);
		
		g=f%10 +8-5;
		h=(f%100)/10 +8-5;
		i=(f%1000)/100 +8-5;
		j=f/1000 +8-5;
		k=i*1000 + j*100 +g*10 + h;
		
		printf("\nThe decrypted integer is %d",k);
		
		if(a==k)
		printf("\nThe data before encryption and after decryption is same. Congrats!");
		else
		printf("\nThe data before encryption and after decryption is not same. Troubleshoot Your code.!");
	}
	else
	printf("\nInvalid Input. Try again.");
	
}
