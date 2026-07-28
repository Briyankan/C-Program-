/*
Find all divisors of a given integer

Write a C program that finds all the divisors of an integer.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45
*/

#include<stdio.h>
int main(){
    int x,i;

    printf("Find all divisors a given integer\n");
    printf("----------------------------------\n");

    printf("Input an integer : ");
    scanf("%d",&x);

    printf("All the divisor of %d are : \n",x);

    for(i=1;i<=x;i++){
        if((x%i) == 0){
            printf("%d\n",i);
           
        }
    }
}