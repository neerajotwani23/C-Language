#include <stdio.h>
int main()
{
    float weight,height,bmi;
    printf("\t\t\t\t\t\t\tBMI Calculator");
    printf("\n\n Enter Your Weight In Kilograms ");
    scanf("%f",&weight);
    printf("\n\n Enter Your Height In Metres ");
    scanf("%f",&height);
    
    bmi=weight/(height*height);
    if (bmi<18.5)
    printf("Your BMI is %.2f and you are Underweight",bmi);
    else if (bmi>=18.5 && bmi<25)
    printf("Your BMI is %.2f and you are Normal ",bmi);
    else if (bmi>=25 && bmi<30)
    printf("Your BMI is %.2f and you are Overweight ",bmi);
    else
    printf("Your BMI is %.2f and you are Obese ",bmi);
    getch();
}
