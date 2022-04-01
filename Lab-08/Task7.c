#include<stdio.h>
int main(){
	int n;
	do{
		printf("Enter Number of Students: ");
		scanf("%d",&n);
	}while(n<0);
	
	int i,students,Failed_Students[n],Passed_Students[n],c1=0,c2=0;
	float marks;
	for(i=0;i<n;i++){
		do{
			printf("Enter Four Digit Student Id: ");
			scanf("%d",&students);
		}while(students<1000 || students>9999);
		do{
			printf("Enter Final Marks Out Of 1100: ");
			scanf("%f",&marks);
		}while(marks<0 || marks>1100);
		
		if(((float)(marks/1100)*100)>=45)
		{
			Passed_Students[c1]=students;
			c1++;
		}
		else{
			Failed_Students[c2]=students;
			c2++;
		}
	}
	do{
		printf("\nEnter 0 For Failed Students or 1 Passed Students: ");
		scanf("%d",&n);
	}while(n!=0 && n!=1);
	if(n==0){
		for(i=0;i<c2;i++)
		printf("\nStudent Id Of Failed Student %d: %d",i+1,Failed_Students[i]);
		}
		if(n==1){
		for(i=0;i<c1;i++)
		printf("\nStudent Id Of Passed Student %d: %d",i+1,Passed_Students[i]);
		}
	
}
