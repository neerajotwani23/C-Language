#include<stdio.h>

void fabonacci(int x,int x1,int x2,int sum)
{
	printf("%lld, ",x2);
	sum=(long long int)x1+x2;
	x1=(float)x2;
	x2=(float)sum;
	if(--x>0)
	fabonacci(x,x1,x2,sum);
}

int main()
{
	int n;
	do
	{
	printf("How Many Terms Do You Want In Fabonacci Series: ");
	scanf("%d",&n);
    }
    while(n<0);
    int n1=0,n2=1,sum=0;
    fabonacci(n,n1,n2,sum);
    
    return 0;

}
