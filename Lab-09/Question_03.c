#include<stdio.h>
int x,y;
void image(int a[x][y])
{
	int i,j,light=0,dark=0;
		for( i=0 ; i<x ; i++)
	{
		for( j=0 ; j<y ; j++)
		{
;
			if(a[i][j]>=0 && a[i][j]<=100)
			    dark++;
			else if(a[i][j]>=200 && a[i][j]<=255)
		        light++;
			 
		}
		printf("\n\n");
	}
	if(dark<light)
	    printf("\n\n\t\tTRUE");
	else
	    printf("\n\n\t\tFALSE");
}
int main()
{
	int x,y;
	
	do
	{
		printf("Enter Number Of Rows: ");
		scanf("%d",&x);
	}
	while (x<0);
	
	do
	{
		printf("Enter Number Of Columns: ");
		scanf("%d",&y);
	}
	while (y<0);
	
	printf("\n\n");
	
	int array[x][y],i,j,dark=0,light=0;
	
	for( i=0 ; i<x ; i++)
	{
		for( j=0 ; j<y ; j++)
		{
			array[i][j] = rand() % 256;
			printf("%d\t",array[i][j]);	 
		}
		printf("\n\n");
	}
	
	image(array[x][y]);

	
	return 0; 
}
