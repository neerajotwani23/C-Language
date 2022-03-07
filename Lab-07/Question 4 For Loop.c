#include<stdio.h>
int main()
{
	int first=0,second=1,sum,db3=0,db5,db7;
	printf("%d",&second);
	for(sum=1;sum<1000;sum=first+second)
	{
		
		
		if(!(sum>1000)){
		
		printf(" %d",sum);
		if(sum%3==0)
		db3+=sum;
		else if(sum%5==0)
		db5+=sum;
		else if(sum%7==0)
		db7+=sum;
		
		first=second;
		second=sum;
	}
	}
	printf("\nSum Of Numbers Divisible By 3: %d\nSum Of Numbers Divisible By 5: %d\nSum Of Numbers Divisible By 7: %d",db3,db5,db7);
}

//Here i think both kind of loops are efficient for my logic
