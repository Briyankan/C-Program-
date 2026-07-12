#include<stdio.h>
int main(){
	int height,width;
	int area;
	int perimeter;

	

	printf("Enter the height of rectangle:");
	scanf("%d",&height);
	printf("Enter the width of rectangle:");
	scanf("%d",&width);

	area = height * width;
	perimeter = 2 * (height + width);

	printf("The area of rectangle is %d and perimeter is %d",area,perimeter);
}
