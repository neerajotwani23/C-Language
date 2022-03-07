#include<stdio.h>
int main()
{
	int d1,m1,y1,d2,m2,y2,difference;
	char from,to;
	
	printf("Enter Current Date (dd mm yyyy): ");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("Enter Date Of Flight (dd mm yyyy): ");
	scanf("%d %d %d",&d2,&m2,&y2);
	printf("Enter Departure City: ");
	scanf(" %c",&from);
	printf("Enter Arrival City: ");
	scanf(" %c",&to);

	
	if(m2-m1==-1 && y2==y1+1){

	m1=31-d1;
	
	difference= m1+ d2;
}
else if(d2-d1<0 && m2==m1+1)
{
	switch (m1)
	{
		case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:
	    case 9:
		m1=31-d1;
		difference=m1+d2;
		break;
		case 2:
		if (y1%4==0)
		m1=29-d1;
		else
		m1=28-d1;
		difference=m1+d2;
		break;
		case 4:
		case 6:
		case 10:
		case 11:
			m1=30-d1;
			difference=m1+d2;
			break;
		}
}
else if(d2>d1 && m1==m2 && y1==y2)
difference = d2-d1;
float price=0;

if(difference>=0 && difference<7){
	
	
	if(from=='L'&& to=='K')
	price=13940;
	else if(from=='I' && to=='K')
	price=13940;
	else if(from=='I' && to=='L')
	price=32500;
	else if(from=='I' && to=='G')
	price=25850;
	else{
	printf("\nThere are no flights available.");
	exit (0);
	}
switch (difference)
{
	case 0:
     	price*=2;
    	break;
	case 1:
	    price*=1.25;
     	break;
	case 2:
		price*=1.2;
	    break;
	case 3:
		price*=1.17;
		break;
	case 4:
		price*=1.15;
		break;
	case 5:
		price*=1.1;
		break;
	case 6:
	    price*=1;
	    break;
}
printf("\nYou have to pay %.2f ruppees",price);
}
else
printf("\nYou are booking too early since the date of flight is too far.");
return 0;
}
