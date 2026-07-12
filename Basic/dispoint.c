#include<stdio.h>
#include<math.h>

int main(){

	float  x1,x2,y1,y2,dis;

	//point 1 input x1,y1

	printf("Input x1:");
	scanf("%f",&x1);
	printf("Input y1:");
	scanf("%f",&y1);
	
	printf("\n");
	// point 2 input x2,y2

	printf("Input x2:");
	scanf("%f",&x2);
	printf("Input y2:");
	scanf("%f",&y2);

	printf("\n");

	dis = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points:%.3f", sqrt(dis));

}

