#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter First Number ");
    scanf("%d",&a);
    printf("Enter Second Number ");
    scanf("%d",&b);
    printf("Enter The Operator ");
    scanf(" %c",&c);
    
    switch (c)
    {
           case 43:
                printf("\nSum of %d and %d is %d",a,b,a+b);
                break;
           case 45:
                printf("\nDifference of %d and %d is %d",a,b,a-b);
                break;
           case 42:
                printf("\nProduct Of %dfand %d is %d",a,b,a*b);
                break;
           case 47:
                printf("\nQuotient Of %d and %d is %d",a,b,a/b);
                break;
           case 37:
                printf("\nModulous of %d and %d is %d",a,b,a%b);
                break;
           case 60:
                printf("\nLeft Shift Of %d by %d is %d",a,b,a<<b);
                break;
           case 62:
                printf("\nRight Shift Of %d by %d is %d",a,b,a>>b);
                break;
           default:
                   printf("\nWrong Operator");
                   break;
                   }
    
    getch();
}
