#include<stdio.h>
int main()
{
	int Ra,Ca,Rb,Cb;
	do
	{
		
		do
		{
			printf("Enter The Number Rows Of Matrix A: ");
			scanf("%d",&Ra);
		}
		while (Ra<0);
		
		do
		{
			printf("Enter The Number Columns Of Matrix A: ");
			scanf("%d",&Ca);
		}
		while (Ca<0);
		
		do
		{
			printf("Enter The Number Rows Of Matrix B: ");
			scanf("%d",&Rb);
		}
		while (Rb<0);
		
		do
		{
			printf("Enter The Number Columns Of Matrix B: ");
			scanf("%d",&Cb);
		}
		while (Cb<0);
		
		if( Ca!=Rb )
		    printf("\nInvalid Dimensions!!!\nPlease re-enter dimentions.\n\n");
		
    }while (Ca!=Rb);
    
    int a[Ra][Ca],b[Rb][Cb],i,j;
    
    printf("\nEnter The Elements of Matrix A: \n");
    
    for( i=0 ; i<Ra ; i++ )
        for( j=0 ; j<Ca ; j++ ) 
        {
        	printf("Matrix A Element %dx%d: ",i+1,j+1);
        	scanf("%d",&a[i][j]);
		}
		
    printf("\nEnter The Elements of Matrix B: \n");
    
    for( i=0 ; i<Rb ; i++)
        for( j=0 ; j<Cb ; j++)
        {
        	printf("Matrix B Element %dx%d: ",i+1,j+1);
        	scanf("%d",&b[i][j]);
		}
	
	int mul[Ra][Cb],k;
	
	printf("\n\n\t\tResultant Matrix: \n\n");
	
	for( i=0 ; i<Ra ; i++ )
	{
		for ( j=0 ; j<Cb ; j++ )
		{
		for ( k=0,mul[i][j]=0 ; k<Ca ; k++)
		{
			mul[i][j]+=a[i][k]*b[k][j];
		}
		printf("%d\t",mul[i][j]);
	    }
	    printf("\n\n");
		
		
	}
		
		
		
		
		
		
		
		
		
}
	
	
