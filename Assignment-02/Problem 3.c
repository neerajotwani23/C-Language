#include<stdio.h>
int main()
{
float a,b,c,d,e,f,g,h,sum;
printf("Enter size of First Side ");
scanf("%f",&a);
printf("Enter size of Second Side ");
scanf("%f",&b);
printf("Enter size of Third Side ");
scanf("%f",&c);
printf("Enter size of Fourth Side ");
scanf("%f",&d);
printf("Enter First angle ");
scanf("%f",&e);
printf("Enter Second angle ");
scanf("%f",&f);
printf("Enter Third angle ");
scanf("%f",&g);
printf("Enter Fourth angle ");
scanf("%f",&h);

sum=e+f+g+h;
if(a>0 && b>0 && c>0 && d>0 && e>0 && f>0 && g>0 && h>0 && sum==360){
	if(a==b && a==c && a==d && e==f && e==g && e==h && e==90)
    printf("\nShape is Square.");
    else if(a==c && b==d && a!=b && e==f && e==g && e==h && e==90)
    printf("\nShape is Rectangle.");
    else if(a==b && a==c && a==d && e==g && f==h && e!=f && ((e>90 && f<90) || (e<90 && f>90)) )
    printf("\nShape is Rhombus.");
    else if(((a==b && a!=c && c==d)||(b==c && a==d && a!=b)) && ((e==g && f!=h)  || (f==h && e!=g)))
    printf("\nShape is Kite.");
    else if(a==c && b==d && a!=b && e==g && f==h && e!=f && ((e>90 && f<90) || (e<90 && f>90)) )
    printf("\nShape is Parallelogram");
    else if(((e==f && e!=g && g==h)||(f==g && e==h && e!=f)) && ((a==c && b!=d)  || (b==d && a!=c)))
    printf("\nShape is Trapezoid");
    else
    printf("\nShape is not a quadrilateral.");

}
else
printf("\nShape is not a quadrilateral.");
return 0;

}
