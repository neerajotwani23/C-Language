#include<stdio.h>
int main()
{
	int d,m,diff,mm; //mm is for days in a month
	int y;
	char vn;
	printf("Enter the Day of the first dose of vaccination: ");
	scanf("%d",&d);
	printf("Enter the Month of the first dose of vaccination: ");
	scanf("%d",&m);
	printf("Enter the Year of the first dose of vaccination: ");
	scanf("%d",&y);
	
	if( (m<0) || (m>12) || (d<0) || (d>31))
	printf("\nInvalid Dates");
	else
	{
		printf("Enter the vaccination Name: ");
		scanf(" %c",&vn);
		switch (vn){
			case 'F':
				diff=24;
			    break;
			case 'M':
				diff=25;
				break;
			case 'S':
				diff=15;
				break;
			case 'V':
				diff=18;
				break;
			case 'P':
				diff=21;
				break;
			case 'A':
				printf("\n Secoond Dose Not Required");
				exit (1);
			default:
				printf("\nWrong Vaccine.");
				exit (1);
		}
		switch (m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 10:
			case 12:
				mm=31;
				break;
			case 2:
				if(y%2==0)  {
				mm=29;}
				else  {
				mm==28; }
				break;
			case 4:
			case 6:
			case 8:
			case 9:
			case 11:
				mm=30;
				break;
		}
			d=d+diff;
			if(d>mm){
			d=d-mm;
			m=m+1;
			if(m>12)
			{
				m=1;
				y=y+1;
			}
			
			

}
printf("Please receive the second dose of vaccination after %d/%d/%d from any nearby vaccination center.",d,m,y);
}
}
