#include<stdio.h>
int main()
{
	int d,m;
	float y,discount;
	printf("Please Enter the Year of Joining: ");
	scanf("%f",&y);
	printf("Please Enter Month of Joining: ");
	scanf("%d",&m);
	printf("Please Enter Day of Joining: ");
	scanf("%d",&d);
	if((d>23 && m==10 && y==2021) || (m>10 && y>2021 ) || (y>2021) || (m<0) || (m>12) || (d<0) || (d>31)) //Current Date:-23-10-2021
    printf("\nInvalid Date Input");
    else {
    	float price;
        printf("\nPlease Enter the Purchasing Cost: ");
        scanf("%f",&price);
        y=(2021-y)*365.25;
        if((m==10 && d<=23) || (m<=10) ){
		
        switch (m){
            case 1:
                m=31+28+31+30+31+30+31+30+30;
                break;
            case 2:
                m=28+31+30+31+30+31+30+30;
                break;
            case 3:
                m=31+30+31+30+31+30+30;
                break;
            case 4:
                m=30+31+30+31+30+30;
            case 5:
                m=31+30+31+30+30;
                break;
            case 6:
                m=30+31+30+30;
                break;
            case 7:
                m=31+30+30;
                break;
            case 8:
                m=30+30;
                break;
            case 9:
            	m=30;
            	break;
            case 10:
            	m=0;
            	break;
            		
           
            }
            y=y+m+d;
            
        }
        else if((m==10 && d>23) || (m>10)){
        	switch(m)
        	{
        		
        		case 11:
					m=0;
					break;
				case 12:
					m=30;
					break;
				}
					
					y=y-m-d-7;
				
			
		}
		
		if(y>1826.25)
			printf("You are offered a 10%% Discount. Kindly pay only Rs. %.2f only.\nYou have saved Rs. %.2f.",price*0.09,price*0.01);
		else if(y>1095.75)
		printf("You are offered a 5%% Discount. Kindly pay only Rs. %.2f only.\nYou have saved Rs. %.2f.",price*0.095,price*0.005);
		else if(y>365.25)
		printf("You are offered a 2.5%% Discount. Kindly pay only Rs. %.2f only.\nYou have saved Rs. %.2f.",price*0.0975,price*0.0025);
		else
		printf("Sorry, You have got no discount.");
		
	
		

    
}
return 0;
}
