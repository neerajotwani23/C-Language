#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("Enter Number Of Integers You Want To Enter: ");
		scanf("%d",&n);
	}
	while(n<0);
	
	int i,j,a=0,b=0,even[n],odd[n],array[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Integer %d: ",i+1);
		scanf("%d",&j);
		if(j%2==0)
		{
			even[a]=j;
			a++;
		}
		else
		{
			odd[b]=j;
			b++;
		}
	
	}
	printf("\n\n");	
	for(i=0;i<a;i++)
	{
		array[i]=even[i];
	}
	for(i=0;i<b;i++)
	{
		array[i+a]=odd[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\nArray Element %d: %d",i+1,array[i]);
	}
	
	
}
