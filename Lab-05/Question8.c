#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter time of day in 24 hours format (for example 13:47) ");
    scanf("%d:%d",&a,&b);
    
    if (a>=5 && b>=11 && a<6 && b<26)
    printf("Its Fajar Time");
    else if(a==6 && b>=26 && b<=30)
    printf("Its Sun rise time");
    else if(a==12 && b<20)
    printf("It will be Zohar time at 12:20");
    else if((a==12 && b>=20) || (a==15 && b<=20) || (a>12 && a<15))
    printf("Its Zohar Time");
    else if((a==15 && b>=42) || (a<=15 && a<=18))
    printf("Its Asr time");
    else if((a==18 && b>=13) || (a==19 && b<=5))
    printf("Its Maghrib time");
    else if((a==19 && b>=29) || (a>19 && a<=24))
    printf("Its Isha Time");
    else
    printf("No prayer is available in the given time");
    getch();
  
}
