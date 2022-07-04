#include <stdio.h>

int ascending(int n,int a[n])
{
	int i = n, j, temp;
		if(n == 1)
			return n;
		for(i=0; i < n-1; i++)
			if (a[i] > a[i+1])
            {
            	temp = a[i];
            	a[i] = a[i+1];
            	a[i+1] = temp;
			}
		ascending(n-1,a);
}


int main()
{
	int n;
	
	printf("How many numbers do you want to sort in ascending order? : ");
	scanf("%d", &n);
	
	int array[n], i;
	
	for(i = 0; i < n; i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &array[i]);
	}
	
	ascending(n, array);
	printf("\n\nAscending Order:\n");
	for(i = 0; i < n; i++)
		printf("\t%d\n", array[i]);	
	return 0;
}
