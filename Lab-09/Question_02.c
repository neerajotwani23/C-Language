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
	
	printf("\n\nGenerated Image \n\n");
	int i,j,array[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			array[i][j] = rand() % 256;
			printf("%d\t",array[i][j]);
		}
		printf("\n\n");
	}
}
