#include<stdio.h>
int main()
{
	int n,x,y;
	do{
		printf("\nEnter a Number greator than 0 and less than 27: ");
		scanf("%d",&n);
	}while(n<1 || n>26);
	for (x=1;x<=n;x++)
	{
		char a='a';
		printf("\n");
		for(y=1;y<=x;y++)
		printf("%c",a++);
	}
}
