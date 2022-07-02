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
		
		if( Ra!=Rb || Ca!=Cb )
		    printf("\nInvalid Dimensions!!!\nPlease re-enter dimentions.\n\n");
		
    }while (Ra!=Rb || Ca!=Cb);
    
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
		
	int cal[Ra][Ca],operation;
	
	do
	{
		printf("\nFor Addition Press 0, For Substraction Press 1: ");
		scanf("%d",&operation);
	}
	while (operation!=0 && operation!=1);
	
	printf("\nResultant Matrix Is\n\n");
	
	for( i=0 ; i<Ra ; i++ )
	{
	    for( j=0 ; j<Ca ; j++ )
		{
		if( operation==0 )	
		    cal[i][j] = a[i][j] + b[i][j]; 
		    
		else if ( operation==1 )
	    	cal[i][j] = a[i][j] - b[i][j]; 
	    	
	    printf("%d\t",cal[i][j]);
		}
		printf("\n");
    }
    
    
}
