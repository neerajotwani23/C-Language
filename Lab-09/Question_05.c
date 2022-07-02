#include<stdio.h>

int main()
{
	int x,y;
	
	do
	{
		printf("Enter The Number Of Rows: ");
		scanf("%d",&x);
	}
	while (x<0);
	
	do
	{
		printf("Enter The Number Of Columns: ");
		scanf("%d",&y);
	}
	while (y<0);
	
	printf("\n\n\t\tEnter The Matrix: \n\n");
	
	int i,j,array[x][y],transpose[y][x];
	
	for ( i=0 ; i<x ; i++ )
	{
		for( j=0 ; j<y ; j++ )
		{
			printf("Input Matrix %dx%d: ",i+1,j+1);
			scanf("%d",&array[i][j]);
			transpose[j][i] = array[i][j];
		}
	}
	
	printf("\n\n\t\tTranspose: \n\n");
	
	
	for ( i=0 ; i<y ; i++ )
	{
		for( j=0 ; j<x ; j++ )
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n\n");
	}
	
	for( i=0 ; i<x ; i++ )
	{
		for( j=0 ; j<y ; j++ )
		{
			if(i==j)
			{
			    if(array[i][j] != 1)
			    {
			    	printf("\n\nThe entered  Matrix is not an Identity Matrix. ");
			    	exit (1);
				}
		    }
			else if(array[i][j]!=0)
			{
				printf("\n\nThe entered  Matrix is not an Identity Matrix. ");
			    exit (1);
			}
			
		}
	}
	
	printf("\n\nThe entered Matrix is an Identity Matrix.");
	
	return 0;
	
	
	
	
}
