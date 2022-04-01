#include<stdio.h>
int main()
{
	int n;
	do{
		printf("Enter Number Of Intergers: ");
		scanf("%d",&n);
	}while(n<0);
	
	int i,j,array[n];
	
	for(i=0;i<n;i++){
		printf("Enter Element %d ",i+1);
		scanf("%d",&array[i]);
	}
	
	int counter;
	
	for(i=0;i<n;i++)
	{
		for(j=0,counter=0;j<n;j++)
	    {
			if(array[i]==array[j])
			counter++;
    	}
		printf("\n %d occurred %d times.",array[i],counter);
	}
	
}
