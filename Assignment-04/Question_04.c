#include<stdio.h>
struct function
{
	int sum, max, min;
};

struct function func(int n,int array[n], int i)
{
	static struct function a;
	
	printf("Enter Integer %d: ",i+1);
	scanf("%d",&array[i]);
	
	if(i==0)
	{
		a.max=array[i];
		a.min=array[i];
		a.sum=0;
	}
	
	if(array[i]>a.max)
	    a.max=array[i];
	
	if(array[i]<a.min)
	    a.min=array[i];
	    
	a.sum += array[i];
	i++;
	if(--n>0)
	func(n,array, i);
	
	return a;
	
}
int main()
{
	int n, i;
	do
	{
		printf("how many Integers Do You Want to Enter: ");
		scanf("%d",&n);
	}
	while(n<0);
	int array[n];
	
	struct function b=func(n,array, i);
	
	printf("\n\nSum: %d\nMaximum: %d\nMinimum: %d",b.sum,b.max,b.min);
	
	return 0;
}
