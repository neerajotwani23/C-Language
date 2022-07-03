#include<stdio.h>

int image(int i,int j,int array[i][j])
{ int a,b;
printf("\n\t\tGenerated Array Is: \n\n");
for(a=0;a<i;a++){
for(b=0;b<j;b++){
array[a][b]=rand() % (255 - 0 + 1) + 0;
printf("\t%d",array[a][b]);
}
printf("\n\n");
}
}

int kernal(int x,int y,int filter[x][y])
{
	int a,b;
	printf("\n\n\t\tGenerated Filter Is: \n\n");
for(a=0;a<x;a++){
	for(b=0;b<y;b++){
		filter[a][b]=-1+b*1;
		printf("\t%d",filter[a][b]);
	}
	printf("\n\n");
}
}

int convolution(int i,int j,int array[i][j],int x,int y, int filter[x][y]){
	int a,b,c,d,sum[x][y];
	for(a=0;a<x;a++){
	for(b=0;b<y;b++){
		sum[a][b]=0;
	}
}
printf("\n\t\tGenerated Result Is :\n\n");
for(c=0;c<x;c++){ 
	for(d=0;d<y;d++){
		for(a=0;a<=(i-x);a++)
			for(b=0;b<=(j-y);b++)
				sum[c][d]+=array[a+1*c][b+1*d]*filter[a][b];
		
	

printf("\t%d",sum[c][d]);
}
printf("\n\n");
}
	
}
int main(){
int i,j,x,y;

do{
printf("Enter Number Of Rows For Matrix: ");
scanf("%d",&i);
}while(i<0);
do{
printf("Enter Number Of Columns For Matrix: ");
scanf("%d",&j);
}while(j<0);


do{
printf("Enter Number Of Rows For Filter: ");
scanf("%d",&x);
}while(x<0);
do{
printf("Enter Number Of Columns For Filter: ");
scanf("%d",&y);
}while(y<0);


int array[i][j],filter[x][y];
image(i,j,array);
kernal(x,y,filter);
convolution(i,j,array,x,y,filter);

return 0;
}
