/*
Sum all numbers between two integers, excluding multiples of 17

Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521
*/

#include<stdio.h>
int main(){
    int x,y,i,temp,sum=0;

    printf(" Sum all numbers between two integers, excluding multiples of 17\n");
    printf("----------------------------------------------------------------\n");

    printf("Input the first integer : ");
    scanf("%d",&x);
    printf("Input the second integer : ");
    scanf("%d",&y);

    //swap value if i is greater than j

    if(x>y){
        temp = y;
        y=x;
        x = temp;
    }

    for(i=x;i<=y;i++){
        if(i % 17 != 0){
            sum += i;
        }
    }

    printf("The sum is : %d\n",sum);

}