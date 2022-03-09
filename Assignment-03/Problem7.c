#include<stdio.h>
int main()
{
	int n;
	do{
		printf("Enter Number Of Terms: ");
		scanf("%d",&n);
	}while(n<=0);
	int poscount=0,negcount=0,zerocount=0;
	
	int i=1;
	int x;
	while(i<=n)
	{
		printf("Enter Term %d: ",i);
		scanf("%d",&x);
		if(x==0)
		zerocount++;
		else if(x>0)
		poscount++;
		else if(x<0)
		negcount++;
		i++;
	}
	printf("\n\nThe Number Of Positive Terms entered is %d.\nThe Number Of Negative Terms entered is %d.\nThe Number Of Zeros entered is %d.",poscount,negcount,zerocount);
	
	if(zerocount>poscount && zerocount>negcount)
	printf("\n\nUser Has Entered More Zeros.");
	else if(poscount>zerocount && poscount>negcount)
	printf("\n\nUser Has Entered More Positive Terms.");
	else if(negcount>poscount && negcount>zerocount)
	printf("\n\nUser Has Entered More Negative Terms.");
	else if(zerocount==poscount)
	printf("\n\n\n\nUser Has Entered More Positive Terms and Zeros.");
	else if(zerocount==negcount)
	printf("\n\nUser Has Entered More Negative Terms and Zeros.");
	else if(poscount==negcount)
	printf("\n\nUser Has Entered More Positive and Negative Terms.");
	
	
	return 0;
	
}
