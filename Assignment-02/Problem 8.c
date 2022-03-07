#include<stdio.h>
int main()
{
	int length,x;
	char c1,c2;
	printf("How many characters are there in your roman number? ");
	scanf("%d",&length);
	if(length==1){
	int value;
	char a;
	printf("Enter Your Roman Character ");
	scanf(" %c",&a);
		 switch(a){
		 case 'I': 
	     value = 1; 
	     break;
	     case 'V': 
	     value = 5; 
	     break;
	     case 'X': 
	     value = 10; 
	     break;
	     case 'L': 
	     value = 50; 
	     break;
	     case 'C': 
	     value = 100; 
	     break;
	     case 'D': 
	     value = 500; 
	     break;
	     case 'M': 
	     value = 1000; 
	     break;
	     default: 
	     value = -1;
	 }
	 if (value!=-1)
	 printf("\nDecimal Equivalent=%d",value);	
	 else
	 printf("\nInvalid Input");
	}
	else if(length==2){
		int value1,value2;
		char a,b;
		printf("Enter the first character ");
		scanf(" %c",&a);
		printf("Enter the second character ");
		scanf(" %c",&b);
		 switch(a){
		 case 'I': 
	     value1 = 1; 
	     break;
	     case 'V': 
	     value1 = 5; 
	     break;
	     case 'X': 
	     value1 = 10; 
	     break;
	     case 'L': 
	     value1 = 50; 
	     break;
	     case 'C': 
	     value1 = 100; 
	     break;
	     case 'D': 
	     value1 = 500; 
	     break;
	     case 'M': 
	     value1 = 1000; 
	     break;
	     default: 
	     value1 = -1;
	 }
	 switch(b){
		 case 'I': 
	     value2 = 1; 
	     break;
	     case 'V': 
	     value2 = 5; 
	     break;
	     case 'X': 
	     value2 = 10; 
	     break;
	     case 'L': 
	     value2 = 50; 
	     break;
	     case 'C': 
	     value2 = 100; 
	     break;
	     case 'D': 
	     value2 = 500; 
	     break;
	     case 'M': 
	     value2 = 1000; 
	     break;
	     default: 
	     value2 = -1;
	 }
	 if(value1!=-1 && value2!=-1){
	 	if(value1>value2)
	 	printf("\nDecimal Equivalent= %d",value1+value2);
	 	else if(value1<value2)
	 	printf("\nDecimal Equivalent= %d",value2-value1);
	 	else
	 	printf("\nDecimal Equivalent= %d",value1+value2);
	 }
	 else
	 printf("\nInvalid Input");
	 }
	 return 0;
	 }

