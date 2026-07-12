#include<stdio.h>
int main(){
	int n1,n2,w1,w2;
	int total;
	double avg;

	printf("Calculate the average weight for purchases\n");
	printf("==========================================\n");

	printf("Enter the item-1 weight:\n");
	scanf("%d",&w1);
	printf("Enter the number of item-1:\n");
	scanf("%d",&n1);
	printf("Enter the item-2 weight:\n");
	scanf("%d",&w2);
	printf("Enter the number of item-2 :\n");
	scanf("%d",&n2);

	total= ((w1*n1)+(w2*n2));
	avg= total/(n1+n2);

	printf("Average value:%lf",avg);

	
}
