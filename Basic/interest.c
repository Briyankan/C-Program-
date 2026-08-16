/*Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000 */

#include<stdio.h>
int main(){
    float p,r,t,i;

    printf("Calculate simple interest (P,R,T)\n");
    printf("---------------------------------\n");

    printf("Enter principle amount : ");
    scanf("%f",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time : ");
    scanf("%f",&t);

    printf("-----------------------------\n");
    printf("principle : %.2f\n",p);
    printf("rate : %.2f\n",r);
    printf("Time : %.2f\n",t);

    i = p * (r/100) * t;

    printf("Simple interest : %.2f",i);
    printf("\n");
}