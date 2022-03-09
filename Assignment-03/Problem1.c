//C-script to convert Decimal Number to Octal
#include<stdio.h>
int main()
{
	int dd,mm,yyyy;
	printf("Enter Date Of Birth (dd mm yyyy): ");
	scanf("%d %d %d",&dd,&mm,&yyyy);
	if(dd>0 && dd<=31 && mm>0 && mm<=12 && yyyy>0){
	
	
	int i=1,rem,oct=0,pos=1;
	while(i<=2){
		rem=dd%8;
		dd=dd/8;
		oct=pos*rem+oct;
		pos=pos*10;
		i=i+1;
		
	}
	dd=dd*pos+oct;
	
	i=1;oct=0;pos=1;
	while(i<=2){
		rem=mm%8;
		mm=mm/8;
		oct=pos*rem+oct;
		pos=pos*10;
		i=i+1;
		
	}
	mm=mm*pos+oct;
	
	i=1;oct=0;pos=1;
	while(i<=4){
		rem=yyyy%8;
		yyyy=yyyy/8;
		oct=pos*rem+oct;
		pos=pos*10;
		i=i+1;
		
	}
	yyyy=yyyy*pos+oct;
	

	printf("%d %d %d",dd,mm,yyyy);
}
else
printf("\nInvalid Date!!!");

return 0;
}
