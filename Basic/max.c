#include<stdio.h>
int main(){
	int x,y,z,result,max;
	printf("Number 1:");
	scanf("%d",&x);
	printf("Number 2:");
	scanf("%d",&y);
	printf("Number 3:");
	scanf("%d",&z);

	result =(x+y+abs(x-y)) / 2;
	max = (result+z+abs(result-z)) / 2;

	printf("The max number is: %d ",max);

}
