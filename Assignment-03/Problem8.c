#include<stdio.h>
int main()
{
	int n;
	do{
		printf("Enter Number Of Iterations: ");
		scanf("%d",&n);
	}while(n<0);
	
	char pattern[2];
	printf("Enter Situation For Normal enter n and for Abnormal enter ab: ");
	scanf("%s",&pattern[0],&pattern[1]);
    int x,y;
	if (pattern[0] == 'n'){
		printf("\n########");

	for(x=1;x<=y;x++){
		printf("\n#");
		for(y=1;y<=n;y++)
		printf("NormalSituation");
		printf("#");
	}
	printf("\n########");
}
    else if (pattern[0] ='a' && pattern[1]=='b'){

    printf("\n********");

	for(x=1;x<=y;x++){
		printf("\n*");
		for(y=1;y<=n;y++)
		printf("AbnormalSituation");
		printf("*");
	}
	printf("\n********");
    
}
	
}
