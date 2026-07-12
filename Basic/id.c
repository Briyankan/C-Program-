#include<stdio.h>
int main(){
	char id[10];
	int h,s;

	printf("Enter the employee ID:");
	scanf("%s",&id);
	printf("Enter  the working hours per day:\n");
	scanf("%d",&h);
	printf("Enter the salary per hour:");
	scanf("%d",&s);
	printf("\n\n");

	printf("==========================\n");
	printf("Employee Id:%s\n",id);
	printf(" The monthly salary:%d\n",h*s*30);


}
