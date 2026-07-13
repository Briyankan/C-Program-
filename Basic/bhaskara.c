/*
Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots
*/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
    double a,b,c,pr1;

    // values a,b,c from user input

    printf("Input the 1st number(a):");
    scanf("%lf",&a);
    printf("Input the 2nd number(b):");
    scanf("%lf",&b);
    printf("Input the 3rd number(c):");
    scanf("%lf",&c);

    pr1 = (b*b) - (4*(a)*(c));

    if(a != 0 && pr1>0){
        double x,y;
        pr1 = sqrt(pr1);
       x = (-b + pr1)/(2*a);
       y = (-b - pr1)/(2*a);

        printf("Root 1: %.4lf\n",x);
        printf("Root 2: %.4lf\n",y);
    }else {
        printf("\nImpossible to find the roots.\n");
    }
}