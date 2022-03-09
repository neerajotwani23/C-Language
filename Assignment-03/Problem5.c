#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float refptx=1,refpty=3;
	float msd;
	printf("\nEnter Most Significant Digit Of Your Mobile Number: ");
	scanf("%f",&msd);
	int n,i;
	if(msd==0)
	n= (pow(2,msd))*4 +3;
	else if(msd>0 && msd<=9)
	n= (pow(2,msd))*0.0625;
	else{
	printf("Invalid MSD!");
	exit (1);
}
	printf("Num Of Locations= %d",n);
	for(i=1;i<=n;i++){
		float x1,y1,distance;
		printf("\nEnter x%d y%d ",i,i);
		scanf("%f %f",&x1,&y1);
		distance=(float)sqrt(pow((refptx-x1),2)+pow((refpty-y1),2));
		printf("\nDistance Of Point %d = %.2f",i,distance);
	}
	
	return 0;
}
