/*
Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0
*/

#include<stdio.h>
int main(){
    float x,y;
    float div;

    printf("Divide two numbers or print if division isn't possible\n");
    printf("------------------------------------------------------\n");

    printf("Input two numbers:\n");
    printf("x : ");
    scanf("%f",&x);
    printf("y : ");
    scanf("%f",&y);

    div = x/y;

    if(y != 0){
        printf("Division is %.2f\n",div);
        
    }else{
        printf("Division is not possible\n");
    }
 



}