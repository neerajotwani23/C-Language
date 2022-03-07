#include<stdio.h>
int main()
{
	int num,i=1,exellent=0,aboveavg=0,passed=0,failed=0;
    do{
        printf("\nEnter Marks: ");
        scanf("%d",&num);
        if(num<=100){
            
            if(num>=86 && num<=89)
                exellent=exellent+1;
            else if(num>=75 && num<=85)
                aboveavg+=1;
            
            if(num>=50)
            passed+=1;
            else
            failed+=1;
                
            i++;    
            
        }
    }while(i<=25);
    
    
    printf("\nExellent Students= %d\nAbove Average Students= %d\nPassed Students= %d\nFailed Students= %d",exellent,aboveavg,passed,failed);
}

