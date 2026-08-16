/*Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
Test Data:
Input Data: 500cms
Input the distance in cm:
Distance of 500.00 cms is = 196.85 inches */

#include<stdio.h>
int main(){
    float c,i; //c = "centimeters" , i = "inches"
    
    printf("COnvert distance from centimeters to inches \n");
    printf("--------------------------------------------\n");

    printf("Enter the distance in cm : ");
    scanf("%f",&c);

    i = c / 2.54 ; // 1 inch = 2.54 cm 

    printf("Distance in inches : %.2f\n",i);

}