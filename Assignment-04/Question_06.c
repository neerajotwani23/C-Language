#include <stdio.h>


void increment(int n, int array[n], int i)
{

	array[i] += 2;
	printf("%d,  ", array[i]);
	i++;
	if(i < n)
		increment(n, array, i);
}


int main()
{
	int n, i =0;
	
	do
	{
		printf("Enter array length: ");
		scanf("%d", &n);		
	}
	while(n <= 0);
	
	int a[n];
	
	for(i = 0; i < n; i++)
	{
		printf("Enter Value %d: ", i+1);
		scanf("%d", &a[i]);
	}
	i=0;
	increment(n, a, i);
	
	return 0;
}
