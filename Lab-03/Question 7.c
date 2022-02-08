#include <stdio.h>

int main(){
    
    signed int x,y,E;
    printf(" Enter the value of x");
    scanf("%d",&x);
    printf(" Enter the value of y");
    scanf("%d",&y);
    
    E = 17*x - 20*y - (x+(9*y))*4 ;
    printf(" E=%d",E);
    getch();
}
