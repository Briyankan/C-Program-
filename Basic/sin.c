/*Calculate and display sin⁡(1x)\sin(\frac{1}{x})sin(x1) for a real number xxx

Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
Input value of x: .6235
Value of sin(1/x) is 0.9995*/

#include<stdio.h>
#include<math.h>
int main(){
    double x,i;

    printf("Calculate and Display\n");
    printf("----------------------\n");

    printf("Input value of x : ");
    scanf("%lf",&x);

    if(x != 0.0){
        i = sin(1/x);
        printf("Value of sin(1/x) : %.4lf\n",i);
    }else {
        printf("Value of x should not Zero :( \n");
    }
}