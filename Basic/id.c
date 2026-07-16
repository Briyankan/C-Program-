#include<stdio.h>
int main(){
	char id[10];
	int h,s;

	printf("Enter the employee ID:");
	scanf("%s",&id[10]);
	printf("Enter  the working hours per day:");
	scanf("%d",&h);
	printf("Enter the salary per hour:");
	scanf("%d",&s);
	printf("\n");

	printf("==========================\n");
	printf("Employee Id:%s\n",id);
	printf("The monthly salary:%d\n",h*s*30);


}
