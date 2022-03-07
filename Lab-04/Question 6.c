#include <stdio.h>

int main()
{
    float a,ta,q,tq,m1,tm1,m2,tm2,f,tf,per;
    printf(" \t\t\t\t\t\tFast NUCES Grade Calculator");
    printf("\n\n Enter Marks Obtained in Assignments ");
    scanf("%f",&a);
    printf("\n Enter Total Marks Of Assignment ");
    scanf("%f",&ta);
    printf("\n Enter Marks Obtained In Quizes ");
    scanf("%f",&q);
    printf("\n Enter Total Marks Of Quizes ");
    scanf("%f",&tq);
    printf("\n Enter Marks Obtaine in Mid 1 ");
    scanf("%f",&m1);
    printf("\n Enter Total Marks Of Mid 1 ");
    scanf("%f",&tm1);
    printf("\n Enter Marks Obtaine in Mid 2 ");
    scanf("%f",&m2);
    printf("\n Enter Total Marks Of Mid 2 ");
    scanf("%f",&tm2);
    printf("\n Enter Marks Obtaine in Finals ");
    scanf("%f",&f);
    printf("\n Enter Total Marks Of Finals ");
    scanf("%f",&tf);
    
    per = ((a/ta)*15) + ((q/tq)*5) + ((m1/tm1)*15) + ((m2/tm2)*15) + ((f/tf)*50);
    
    if (per>90)
    printf("\n\nCongratulations, You have obtained grade A ");
    else if (per>80)
    printf("\n\n You have obtained A grade B");
    else if (per>70)
    printf("\n\n You have obtained A grade C");
    else if (per>60)
    printf("\n\n You have obtained A grade D");
    else if (per>50)
    printf("\n\n You are just passed");
    else
    printf("\n\n You are Failed, Better luck next time");
    
    
    
    getch ();
    
}
