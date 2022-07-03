#include<stdio.h>
#include<math.h>

void relu(int x,int y,int a[x][y])
{
	int i,j;
	for( i=0 ; i<x ; i++ )
	{
		for( j=0 ; j<y ; j++ )
		{
			if(a[i][j]<0)
			a[i][j]=0;
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}
void sigmoid(int x,int y,int a[x][y])
{
	int i,j;
	float array[x][y];
	for( i=0 ; i<x ; i++ )
	{
		for( j=0 ; j<y ; j++ )
		{
			if(a[i][j]>(-6) && a[i][j]<6)
			array[i][j]=(float)1/(1+pow(2.718,(-1)*a[i][j]));
			else if(a[i][j]<=(-6))
			array[i][j]=0;
			else if(a[i][j]>=6)
			array[i][j]=1;
			printf("%f\t",array[i][j]);
		}
		printf("\n\n");
	}
}

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
	
	int i,j,array[x][y];
	
	for ( i=0 ; i<x ; i++ )
	{
		for( j=0 ; j<y ; j++ )
		{
			printf("Input Matrix %dx%d: ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
	
	int operation;
	
	do
	{
		printf("\nFor Relu Function Press 0, For Sigmoid Press 1: ");
		scanf("%d",&operation);
	}
	while (operation!=0 && operation!=1);
	
	if(operation==0)
	relu(x,y,array);
	else if (operation==1)
	sigmoid(x,y,array);
	
	return 0;
}
