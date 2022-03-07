#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a1,a2,a3;
	do{
	printf("\nEnter Three Alphabets: ");
	scanf(" %c%c%c",&a1,&a2,&a3);
}
while(!(((a1>='A' && a1<='Z') || (a1>='a' && a1<='z')) && ((a2>='A' && a2<='Z') || (a2>='a' && a2<='z'))&& ((a3>='A' && a3<='Z') || (a3>='a' && a3<='z'))));
char c1,c2,c3;
int counta,countb,countc;


 do{
        printf("Enter New Alphabet:");
        scanf(" %c",&c1);
        
        if(c1==a1) counta++; else if (c1==a2) countb++; else if(c1==a3) countc++;
        if(((c1==a1 && c2==a3) || (c1==a3 && c2==a1) ) && c3==a2)
        {
            printf("Alphabet: %c came %d times.\nAlphabet: %c came %d times.\nAlphabet: %c came %d times.",a1,counta,a2,countb,a3,countc);
            exit(0);
        }
         printf("Enter New Alphabet:");
        scanf(" %c",&c2);
        
        if(c2==a1) counta++; else if (c2==a2) countb++; else if(c2==a3) countc++;
        if(((c3==a1 && c2==a3) || (c3==a3 && c2==a1) ) && c1==a2)
        {
            printf("Alphabet: %c came %d times.\nAlphabet: %c came %d times.\nAlphabet: %c came %d times.",a1,counta,a2,countb,a3,countc);
            exit(0);
        }
         printf("Enter New Alphabet:");
        scanf(" %c",&c3);
        
        if(c3==a1) counta++; else if (c3==a2) countb++; else if(c3==a3) countc++;
        if(((c1==a1 && c3==a3) || (c1==a3 && c3==a1) ) && c2==a2)
        {
            printf("Alphabet: %c came %d times.\nAlphabet: %c came %d times.\nAlphabet: %c came %d times.",a1,counta,a2,countb,a3,countc);
            exit(0);
        }
    }while(1);

return 0;
}
