#include<stdio.h>
int main(){
    int n;
    do{
        printf("How many numbers you want to get checked? ");
        scanf("%d",&n);
        
    }while(n<=10);
    int num,i=1,Codd=0,Ceven=0,Cfactof3=0,sum=0;
    do{
        printf("\nEnter Number: ");
        scanf("%d",&num);
        if(num>0){
            sum+=num;
            if(num%3==0)
                Cfactof3=Cfactof3+1;
            else if(num%2==0)
                Ceven=Ceven+1;
            else if(num%2==1)
                Codd=Codd+1;
                
            i++;    
            
        }
    }while(i<=n);
    sum/=i;
    
    printf("\nAverage= %d\nFactors Of 3= %d\nEven Numbers= %d\nOdd Numbers= %d",sum,Cfactof3,Ceven,Ceven);
}
