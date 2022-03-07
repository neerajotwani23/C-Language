#include<stdio.h>
int main()
{
	char p1,p2,p3,p4,p5,p6,p7,s1,s6,s7;
	printf("Have you offered Japji Sahib (Y or N)");
	scanf("%c",&p1);
	if(p1=='Y'){
		printf("Was Japji Sahib Offered in Saadh Sangat? (Y or N)");
		scanf(" %c",&s1);
		printf("Have you offered Jaap Sahib? (Y or N)");
    	scanf(" %c",&p2);
    	if(p2=='Y')
    {printf("Have you offered Tav Parsad Sawaye? (Y or N)");
	scanf(" %c",&p3);
	if(p3=='Y'){
		printf("Have you offered Chaupai Sahib? (Y or N)");
	    scanf(" %c",&p4);
	    if(p4=='Y')
	    {
	    	printf("Have you offered Anand Sahib? (Y or N)");
        	scanf(" %c",&p5);
		}
	}
	}
	
	}
	printf("Have you offered Rehras Sahib (Y or N)");
	scanf(" %c",&p6);
	if(p6=='Y')
	{
		printf("Was Rehras Sahib Offered in Saadh Sangat? (Y or N)");
		scanf(" %c",&s6);
	}
	printf("Have you offered Kirtan Sohila (Y or N)");
	scanf(" %c",&p7);
	if(p7=='Y')
	{
		printf("Was Kirtan Sohila Offered in Saadh Sangat? (Y or N)");
		scanf(" %c",&s7);
	}
	
	
	if(p1!='Y' || p2!='Y' || p3!='Y' || p4!='Y' || p5!='Y' || p6!='Y' || p7!='Y')
	printf("\n\n\n\n\nThose, that do their Nitnem daily, strengthen their identity as Sikhs \nand make themselves stronger Sikhs. They create bonds with others on the Path that do \ntheir Nitnem daily as well.");
	else if(s1!='Y' || s6!='Y' || s7!='Y')
	printf("\n\n\n\n\nIn the Saadh Sangat, the Company of the Holy, you shall become absolutely pure, \nand the noose of death shall be cut away.");
	else if(p1=='Y' && p2=='Y' && p3=='Y' && p4=='Y' && p5=='Y' && p6=='Y' && p7=='Y' &&s1=='Y' && s6=='Y' && s7=='Y' )
	printf("\n\n\n\n\nYou had a blessed day");
	
	return 0;
}

 
