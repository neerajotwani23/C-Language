#include<stdio.h>
int main(){
    char a,b,c,d,e,f,g,h,i,j;
    int vovl=0,cons=0;
    printf("Enter Ten Characters ");
    scanf("%c%c%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    if (a =='a' || a =='A' || a =='e' || a =='E' || a =='o' || a =='O' || a =='u' || a =='U' || a =='i' || a =='I' )
    vovl=vovl+1;
    else if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    cons=cons+1;
    
    if (b =='a' || b =='A' || b =='e' || b =='E' || b =='o' || b =='O' || b =='u' || b =='U' || b =='i' || b =='I' )
    vovl=vovl+1;
    else if ((b>='a' && b<='z') || (b>='A' && b<='Z'))
    cons=cons+1;
    
    if (c =='a' || c =='A' || c =='e' || c =='E' || c =='o' || c =='O' || c =='u' || c =='U' || c =='i' || c =='I' )
    vovl=vovl+1;
    else if ((c>='a' && c<='z') || (c>='A' && a<='Z'))
    cons=cons+1;
    
    if (d =='a' || d =='A' || d =='e' || d =='E' || d =='o' || d =='O' || d =='u' || d =='U' || d =='i' || d =='I' )
    vovl=vovl+1;
    else if ((d>='a' && d<='z') || (d>='A' && d<='Z'))
    cons=cons+1;
    
    if (e =='a' || e =='A' || e =='e' || e =='E' || e =='o' || e =='O' || e =='u' || e =='U' || e =='i' || e =='I' )
    vovl=vovl+1;
    else if ((e>='a' && e<='z') || (e>='A' && e<='Z'))
    cons=cons+1;
    
    if (f =='a' || f =='A' || f =='e' || f =='E' || f =='o' || f =='O' || f =='u' || f =='U' || f =='i' || f =='I' )
    vovl=vovl+1;
    else if ((f>='a' && f<='z') || (f>='A' && f<='Z'))
    cons=cons+1;
    
    if (g =='a' || g =='A' || g =='e' || g =='E' || g =='o' || g =='O' || g =='u' || g =='U' || g =='i' || g =='I' )
    vovl=vovl+1;
    else if ((g>='a' && g<='z') || (g>='A' && g<='Z'))
    cons=cons+1;
    
    if (h =='a' || h =='A' || h =='e' || h =='E' || h =='o' || h =='O' || h =='u' || h =='U' || h =='i' || h =='I' )
    vovl=vovl+1;
    else if ((h>='a' && h<='z') || (h>='A' && h<='Z'))
    cons=cons+1;
    
    if (i =='a' || i =='A' || i =='e' || i =='E' || i =='o' || i =='O' || i =='u' || i =='U' || i =='i' || i =='I' )
    vovl=vovl+1;
    else if ((i>='a' && i<='z') || (i>='A' && i<='Z'))
    cons=cons+1;
    
    if (j =='a' || j =='A' || j =='e' || j =='E' || j =='o' || j =='O' || j =='u' || j =='U' || j =='i' || j =='I' )
    vovl=vovl+1;
    else if ((j>='a' && j<='z') || (j>='A' && j<='Z'))
    cons=cons+1;
    
    if (vovl>cons)
    printf("\nYou have entered more Vowels.");
    else if (vovl<cons)
    printf("\nYou have entered more Consonents.");
    else 
    printf("\nYou have entered same number of Vowels and consonents");
    
    printf("\nNumber Of Vowels: %d \nNumber Of Consonents: %d",vovl,cons);
    getch ();
}    
