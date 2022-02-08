#include <stdio.h>
int main ( ) { 
float ap19 = 6200,ad19 = 650,ap20 = 8200,ad20 = 800,p19,p20;


p19 = 100*(ad19/ap19);
p20 = 100*(ad20/ap20); 
printf("\n In the 2019 entrance test of FAST NUCES %.0f applicants registered for the test. However, only %.0f were admitted to the University.",ap19,ad19);
printf("\n Percentage of successfull students in  2019: %.2f", p19);

printf("\n\n In the 2020 entrance test of FAST NUCES %.0f applicants registered for the test. However, only %.0f were admitted to the University.", ap20,ad20);
printf("\n Percentage of successful students in 2020: %.2f", p20);

if (p19>p20){
              printf("\n\n In year 2019, higher percentage of students got admission in fast.");
              }
else{
     printf("\n\n In year 2020, higher percentage of students got admission in fast.");
     }
     
getch();
}
