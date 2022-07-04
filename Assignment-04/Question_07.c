#include <stdio.h>
#include <math.h>
struct Area
{
	float a;
	float b;
	float angle;
};
int main()
{
	int i;
	struct Area a[6] ={{137.4, 80.9, 0.78},{149.3, 92.62, 0.89},{149.3, 97.93, 1.3},{160.0, 100.25, 9.00},{155.6, 68.95, 1.25},{149.7, 120.0, 1.75}};
	float Area[6];
	for(i = 0; i < 6; i++)
		Area[i]=(a[i].a*a[i].b*0.5)*sin(a[i].angle);
	for(i = 0; i < 6; i++)
		printf("Area %d: %.2f\n", i+1, Area[i]);
		
	float largest = Area[0];
	for( i=0 ; i<6 ; i++ )
		if(Area[i] > largest)
			largest=Area[i];
		
	printf("\nLargest Area: %.2f", largest);
	return 0;
}
