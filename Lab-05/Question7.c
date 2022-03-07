#include<stdio.h>
int main()
{
    char gpf,gict,gpst,gcal,gap;
    float cpf,cict,cpst,ccal,cap,ogpf,ogict,ogpst,ogcal,ogap,gpa;
    printf("\nEnter the grade obtained in Programming Fundamentals ");
    scanf("%c",&gpf);
    printf("\nEnter the credit hours you attened in Programming Fundamentals ");
    scanf(" %f",&cpf);
    printf("\nEnter the grade obtained in ICT ");
    scanf(" %c",&gict);
    printf("\nEnter the credit hours you attened in ICT ");
    scanf(" %f",&cict);
    printf("\nEnter the grade obtained in Pakistan Studies ");
    scanf(" %c",&gpst);
    printf("\nEnter the credit hours you attened in Pakistan Studies ");
    scanf(" %f",&cpst);
    printf("\nEnter the grade obtained in Calculus ");
    scanf(" %c",&gcal);
    printf("\nEnter the credit hours you attened in Calculus ");
    scanf(" %f",&ccal);
    printf("\nEnter the grade obtained in Applied Physics ");
    scanf(" %c",&gap);
    printf("\nEnter the credit hours you attened in Applies Physics ");
    scanf(" %f",&cap);
    
    if ( gpf!='f' && gpf!='F' && gict!='f' && gict!='F' && gpst!='f' && gpst!='F' && gcal!='f' && gcal!='F' && gap!='f' && gap!='F' )
    {
       switch(gpf)
       {
                  case 'A':
                       ogpf=4;
                       break;
                  case 'a':
                       ogpf=4;
                       break;
                  case 'B':
                       ogpf=3.5;
                       break;
                  case 'b':
                       ogpf=3.5;
                       break;
                  case 'C':
                       ogpf=3;
                       break;
                  case 'c':
                       ogpf=3;
                       break;
                  case 'D':
                       ogpf=2.5;
                       break;
                  case 'd':
                       ogpf=2.5;
                       break;
                  case 'E':
                       ogpf=2;
                       break;
                  case 'e':
                       ogpf=2;
                       break;
                  default:
                          printf("\nInvalid Grade Entered In Programming Fundamentals");
                          break;
                          }
       switch(gict)
       {
                  case 'A':
                       ogict=4;
                       break;
                  case 'a':
                       ogict=4;
                       break;
                  case 'B':
                       ogict=3.5;
                       break;
                  case 'b':
                       ogict=3.5;
                       break;
                  case 'C':
                       ogict=3;
                       break;
                  case 'c':
                       ogict=3;
                       break;
                  case 'D':
                       ogict=2.5;
                       break;
                  case 'd':
                       ogict=2.5;
                       break;
                  case 'E':
                       ogict=2;
                       break;
                  case 'e':
                       ogict=2;
                       break;
                  default:
                          printf("\nInvalid Grade Entered In ICT");
                          break;
                          }
       switch(gpst)
       {
                  case 'A':
                       ogpst=4;
                       break;
                  case 'a':
                       ogpst=4;
                       break;
                  case 'B':
                       ogpst=3.5;
                       break;
                  case 'b':
                       ogpst=3.5;
                       break;
                  case 'C':
                       ogpst=3;
                       break;
                  case 'c':
                       ogpst=3;
                       break;
                  case 'D':
                       ogpst=2.5;
                       break;
                  case 'd':
                       ogpst=2.5;
                       break;
                  case 'E':
                       ogpst=2;
                       break;
                  case 'e':
                       ogpst=2;
                       break;
                  default:
                          printf("\nInvalid Grade Entered In Pakistan Studies");
                          break;
                          }
       switch(gcal)
       {
                  case 'A':
                       ogcal=4;
                       break;
                  case 'a':
                       ogcal=4;
                       break;
                  case 'B':
                       ogcal=3.5;
                       break;
                  case 'b':
                       ogcal=3.5;
                       break;
                  case 'C':
                       ogcal=3;
                       break;
                  case 'c':
                       ogcal=3;
                       break;
                  case 'D':
                       ogcal=2.5;
                       break;
                  case 'd':
                       ogcal=2.5;
                       break;
                  case 'E':
                       ogcal=2;
                       break;
                  case 'e':
                       ogcal=2;
                       break;
                  default:
                          printf("\nInvalid Grade Entered In Calculas");
                          break;
                          }
       switch(gap)
       {
                  case 'A':
                       ogap=4;
                       break;
                  case 'a':
                       ogap=4;
                       break;
                  case 'B':
                       ogap=3.5;
                       break;
                  case 'b':
                       ogap=3.5;
                       break;
                  case 'C':
                       ogap=3;
                       break;
                  case 'c':
                       ogap=3;
                       break;
                  case 'D':
                       ogap=2.5;
                       break;
                  case 'd':
                       ogap=2.5;
                       break;
                  case 'E':
                       ogap=2;
                       break;
                  case 'e':
                       ogap=2;
                       break;
                  default:
                          printf("\nInvalid Grade Entered In Applied Physics");
                          break;
                          }
                          
       cpf=(ogpf*cpf)/51;
       cict=(ogict*cict)/13;
       cpst=(ogpst*cpst)/39;
       ccal=(ogcal*ccal)/39;
       cap=(ogap*cap)/39;
       
       gpa=(cpf+cict+cpst+ccal+cap)/5;
       
       if(gpa>=3.8)
       printf("\nCongratulations, you are qualified for full scholarship");
       else if(gpa>=3.5 && gpa<3.8)
       printf("\nYou are qualified for 75% scholarship");
       else if(gpa>=3.3 && gpa<3.5)
       printf("\nYou are qualified for 50% scholarship");
       else if(gpa<3.3)
       printf("\nSorry, You are not qualified for scholarship");
       }
       else
       printf("\nSince you are fail, you are not qualified for scholarship");
       
       getch ();
       }
