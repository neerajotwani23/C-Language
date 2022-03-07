#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf(" \t\t\t\tNational University Of Computing & Emerging Sciences: ");
	printf("\n\t\t\t\t\tEntery Test 2022  ");
	printf("\n\nNote: Calculator Is Not Allowed.");
	char q1,q2,q3,q4,q5,q6,q7,q8,q9;
	int marks=0,wrong=0;
	printf("\n\nQuestion 1:  If x=2 and y=4 then (x+y)^2 =");
	printf("\na: 40\tb: 26\tc: 36\td: 38");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q1);}
	while(q1!='a'&& q1!='b' && q1!='c' && q1!='d' && q1!='A'&& q1!='B' && q1!='C' && q1!='D');
	if(q1=='c' || q1=='C')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	printf("\n\nQuestion 2:  If x=8 and y=7 and z=x+y-3 then (a+b+c)^2 =");
	printf("\na: 729\tb: 583\tc: 769\td: 801");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q2);}
	while(q2!='a'&& q2!='b' && q2!='c' && q2!='d' && q2!='A'&& q2!='B' && q2!='C' && q2!='D');
	if(q2=='a' || q2=='A')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	
	printf("\n\nQuestion 3:  If x=20 and y=10 then (x+y)/(x-y) =");
	printf("\na: 8\tb: 3\tc: 5\td: 4");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q3);}
	while(q3!='a'&& q3!='b' && q3!='c' && q3!='d' && q3!='A'&& q3!='B' && q3!='C' && q3!='D');
	if(q3=='b' || q3=='B')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	printf("\n\nQuestion 4:  If x=50 and y=28 then (x-y)mod 4 =");
	printf("\na: 0\tb: 1\tc: 2\td: 3");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q4);}
	while(q4!='a'&& q4!='b' && q4!='c' && q4!='d' && q4!='A'&& q4!='B' && q4!='C' && q4!='D');
	if(q4=='c' || q4=='C')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	if(wrong==4)
	exit (1);
	
	printf("\n\nQuestion 5:  Green is to grass as red is to?");
	printf("\na: Blood\tb: Rose\tc: Carpet\td: None");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q5);}
	while(q5!='a'&& q5!='b' && q5!='c' && q5!='d' && q5!='A'&& q5!='B' && q5!='C' && q5!='D');
	if(q5=='a' || q5=='A')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	if(marks>=20)
	{
		printf("\n\nCongratulations, you have qualified for the admission.");
		exit (1);
	}
	else if(wrong==4)
     	exit (1);
	
	printf("\n\nQuestion 6:  a^2 + b^2=");
	printf("\na: a^2-b^2\tb: a+b\tc: 2ab\td: (a+b)^2 -2ab");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q6);}
	while(q6!='a'&& q6!='b' && q6!='c' && q6!='d' && q6!='A'&& q6!='B' && q6!='C' && q6!='D');
	if(q6=='d' || q6=='D')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}	
	
	if(marks>=20)
	{
		printf("\n\nCongratulations, you have qualified for the admission.");
		exit (1);
	}
	else if(wrong==4)
     	exit (1);
     	
    printf("\n\nQuestion 7:  A= A %% B: Here modulous function is used to store ");
	printf("\na: remainder\tb: quotient\tc: divisor\td: divident");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q7);}
	while(q7!='a'&& q7!='b' && q7!='c' && q7!='d' && q7!='A'&& q7!='B' && q7!='C' && q7!='D');
	if(q5=='a' || q5=='A')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	if(marks>=20)
	{
		printf("\n\nCongratulations, you have qualified for the admission.");
		exit (1);
	}
	else if(wrong==4)
     	exit (1);
     	
    printf("\n\nQuestion 8:  If x=900 and y=300 then (x/y)mod 4 =");
	printf("\na: 0\tb: 1\tc: 2\td: 3");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q8);}
	while(q8!='a'&& q8!='b' && q8!='c' && q8!='d' && q8!='A'&& q8!='B' && q8!='C' && q8!='D');
	if(q8=='d' || q8=='D')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	if(marks>=20)
	{
		printf("\n\nCongratulations, you have qualified for the admission.");
		exit (1);
	}
	else if(wrong==4)
     	exit (1);
	
	printf("\n\nQuestion 9:  If x=500 and y=250 anc c=(x/y)*2 then (x+y-z)=");
	printf("\na: 450\tb: 550\tc: 500\td: 600");
	do{
	
	printf("\nEnter Correct Option:  ");
	scanf(" %c",&q9);}
	while(q9!='a'&& q9!='b' && q9!='c' && q9!='d' && q9!='A'&& q9!='B' && q9!='C' && q9!='D');
	if(q9=='d' || q9=='D')
	marks+=4;
	else{
		marks-=1;
		wrong+=1;
	}
	if(marks>=20)
	{
		printf("\n\nCongratulations, you have qualified for the admission.");
		exit (1);
	}
	else if(wrong==4)
     	exit (1);
     	
     	
    return 0;
	
	
			
	

	
	
}
