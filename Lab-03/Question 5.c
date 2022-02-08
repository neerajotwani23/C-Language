#include <stdio.h>

int main(){
    
    float vi,a,t,s;
    
    printf(" Hello Students, \n Today we will calculate the distance covered by a body through second equation of motion");
    
    printf("\n \aEnter Initial Velocity of the body in metre per second");
    scanf("%f",&vi);
    printf(" \aEnter Acceleration of the body in metre per second square");
    scanf("%f",&a);
    printf(" \aEnter Time in s");
    scanf("%f",&t);
    
    s = (vi * t) + (a * t * t)/2;
    printf("\n \aThe Distace covered by the body is %.4f metres",s);
    getch ();
}
