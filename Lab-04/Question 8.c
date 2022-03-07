#include<stdio.h>

int main()
{
    float m,p,cs,tm,tp,tcs,per,pm,pp,pcs;
    printf(" Enter Marks Obtained in Mathematics ");
    scanf("%f",&m);
    printf(" Enter Total Marks Of Mathematics ");
    scanf("%f",&tm);
    printf(" Enter Marks Obtained in Physics ");
    scanf("%f",&p);
    printf(" Enter Total Marks Of Physics ");
    scanf("%f",&tp);
    printf(" Enter Marks Obtained In Computer Science ");
    scanf("%f",&cs);
    printf(" Enter Total Marks Of Computer Science ");
    scanf("%f",&tcs);
    printf(" Enter Your Percentage ");
    scanf("%f",&per);
    pm=(m/tm)*100;
    pp=(p/tp)*100;
    pcs=(cs/tcs)*100;
    
    if (per>60 && pm>60 && pp>60 && pcs>60)
    {
    if (pm>=80 && pp>=80 && pcs>=80)
    printf(" Option 1: BS CS From FAST \n Option 2: BBA From IBA \n Option 3: BS SE From NUST");
    else if (pm>80 && pp<80 && pp<80)
    printf(" Option 1: BBA From IBA \n Option 2: BBA From Fast \n Option 3: BBA From LUMS \n Option 4: BS Mathematics From NUST");
    else if (pp>80 && pm>80 && pcs<80)
    printf(" Option 1: BS EE From FAST \n Option 2: BS EE From NUST \n Option 3: BS Physics From NUST");
    else if (pcs>80 && pp>80 && pm>80)
    printf(" Option 1: BS CS From FAST \n Option 2: BS SE From NUST \n Option 3: BS SE From FAST");

    
    }
    else{
    printf("You can not apply for Enggineering");
}
getch ();
}

    
    
    
    
