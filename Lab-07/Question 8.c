#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("\t\t\tRegisteration");
	char a1,a2,a3,a4,a5;
	do{
	printf("\nEnter Use Name Of Five Aplhabets: ");
	scanf(" %c%c%c%c%c",&a1,&a2,&a3,&a4,&a5);
	
}
while(!(((a1>='A' && a1<='Z') || (a1>='a' && a1<='z')) && ((a2>='A' && a2<='Z') || (a2>='a' && a2<='z'))&& ((a3>='A' && a3<='Z') || (a3>='a' && a3<='z')) && ((a4>='A' && a4<='Z') || (a4>='a' && a4<='z')) && ((a5>='A' && a5<='Z') || (a5>='a' && a5<='z'))));
char b1,b2,b3,b4,b5,b6;
int c1=0,c2=0,c3=0;
do{
	printf("Enter Password of six characters (Atleast one Capital, one Small, one Number): ");
	scanf(" %c%c%c%c%c%c",&b1,&b2,&b3,&b4,&b5,&b6);
	
	if((b1>='a' && b1<='z') || (b2>='a' && b2<='z') || (b3>='a' && b3<='z') || (b4>='a' && b4<='z') || (b5>='a' && b5<='z') || (b6>='a' && b6<='z')) c1++;
	if((b1>='A' && b1<='Z') || (b2>='A' && b2<='Z') || (b3>='A' && b3<='Z') || (b4>='A' && b4<='Z') || (b5>='A' && b5<='Z') || (b6>='A' && b6<='Z')) c2++;
	if(((int)b1>=0 && (int)b1<=9) || ((int)b2>=0 && (int)b2<=9) || ((int)b3>=0 && (int)b3<=9) || ((int)b4>=0 && (int)b4<=9) || ((int)b5>=0 && (int)b5<=9) || ((int)b6>=0 && (int)b6<=9)) c3++;
	if(c1==1 && c2==1 && c3==1){
		printf("\nAccount Created Successfully.");
		break;
	}
	continue;
	 
}while(c1!=1 && c2!=1 && c3!=1);


printf("\t\t\t Login ");
char d1,d2,d3,d4,d5,e1,e2,e3,e4,e5,e6;
printf("\nEnter Your Username: ");
scanf(" %c%c%c%c%c",&d1,&d2,&d3,&d4,&d5);
printf("\n Enter Your Password: ");
scanf(" %c%c%c%c%c%c",&e1,&e2,&e3,&e4,&e5,&e6);


if(d1==a1 && d2==a2 && d3==a3 && d4==a4 && d5==a5 && e1==b1 && e2==b2 && e3==b3 && e4==b4 && e5==b5 && e6==b6)
printf("\n\n“Welcome %c%c%c%c%c, you are now logged in”.",d1,d2,d3,d4,d5);
else
printf("\n\nInvalid Login Credentials!");

return 0;
}
