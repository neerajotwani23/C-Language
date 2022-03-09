#include<stdio.h>
#include<math.h>
int main()
{
	int N,n=0,x;
	float sum=0;
	
	printf("Enter Value of N: ");
	scanf("%d",&N);
	printf("Enter any positive integer: ");
	scanf("%d",&x);
	
	while(x<0){
		printf("\nInvalid Input");
		printf("\nEnter any positive integer: ");
	    scanf("%d",&x);
			}
	
	float numerator,denominator;
	while(n<N){
		numerator = pow(x,n);
		int i=1;
		float factorial=1;
		
		if(n==0)
		factorial=1;
		
		while(i<=n){
			factorial=(long long int)factorial*i;
			i++;
		}
		denominator=factorial;
		
		sum+=(float)(numerator/denominator);
		
		n++;
		
	}
	printf("\nSum Of Taylor Series= %.2f",sum);
			
}
