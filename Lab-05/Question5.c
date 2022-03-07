#include<stdio.h>
int main()
{
    float pf,ict,pst,cal,ap,total,per;
    
    printf("Enter marks obtained in Programming Fundamentals: ");
    scanf("%f",&pf);
    printf("Enter maarks obtained in ICT: ");
    scanf("%f",&ict);
    printf("Enter maarks obtained in Pakistan Studies: ");
    scanf("%f",&pst);
    printf("Enter maarks obtained in Calculus: ");
    scanf("%f",&cal);
    printf("Enter maarks obtained in Applied Physics: ");
    scanf("%f",&ap);
    
    total=pf+ict+pst+cal+ap;
    per=(total/500)*100;
    
    printf("National University Of Computer and Emerging Sciences");
    printf("\n\n\t\t\tResult Card");
    printf("\n  Programming Fundaments: %.2f",pf);
    printf("\n     \tICT\t     : %.2f",ict);
    printf("\n    Pakistan Studies    : %.2f",pst);
    printf("\n\tCalculus\t: %.2f",cal);
    printf("\n    Applied Phhysics    :%.2f",ap);
    printf("\n\n You have obtained %.2f marks from 500",total);
    printf("\n Percentage: %.2f%",per);
    
    if(pf<40)
    printf("\n Failed in Programming Fundamentals");
    if(ict<40)
    printf("\n Failed in ICT");
    if(pst<40)
    printf("\n Failed in Pakistan Studies");
    if(cal<40)
    printf("\n Failed in Calculus");
    if(ap<40)
    printf("\n Failed in Applied Physics");
    
    if(per>=50 && pf>=40 && ict>=40 && pst>=40 && cal>=40 && ap>=40)
    printf("\n Congratulations You are Passed");
    else if(pf<40 || ict<40 || pst<40 || cal<40 || ap<40 || per<50)
    printf("\n You are Failed");
    
    getch();
}
    
    
