/*
Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them.
Determine the perimeter of the triangle if the given values are valid.
*/

#include<stdio.h>
int main(){
    int a,b,c,sum; //here a,b,c are lenth of triangle pages

    printf("calculate perimeter\n");
    printf("===================\n");

    printf("Enter the side 1 lenth : ");
    scanf("%d",&a);
    printf("Enter the side 2 lenth : ");
    scanf("%d",&b);
    printf("ENter the side 3 lenth : ");
    scanf("%d",&c);

    sum = a + b + c;

    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("Perimeter : %d + %d + %d = %d\n",a,b,c,sum);
    }else{
        printf("This is not valid triangle\n");
    }
}