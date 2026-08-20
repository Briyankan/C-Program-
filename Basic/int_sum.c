/*Compute the sum of the digits of an integer less than 500

Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
Input a positive number less than 500:
Sum of the digits of 347 is 14*/

#include<stdio.h>
int main(){
    int x,i,sum=0,y;

    printf("Compute the sum of the digits of an integer less than 500\n");
    printf("----------------------------------------------------------\n");

    printf("Input a positive nuber less than 500 : ");
    scanf("%d",&x);

  y = x;
    if(y<1 || y>999){
        printf("Your value out of range\n");
    }else{
        sum += y % 10;
        y /= 10;
        sum += y % 10;
        y /= 10;
        sum += y % 10;
        printf("Sum of the digit %d is %d ",x,sum);
    }

    
}