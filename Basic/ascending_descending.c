/* Write a C program to check if two numbers in a pair are in ascending order or descending order.
Test Data :
Input a pair of numbers (for example 10,2 : 2,10):
Input first number of the pair: 10
Expected Output:
Input second number of the pair: 2
The pair is in descending order! 
*/

#include<stdio.h>
int main(){
    int x,y;

    printf("Check if a pair of numbers is in ascending/descending order\n");
    printf("-----------------------------------------------------------\n");

    printf("Input first number of pair: ");
    scanf("%d",&x);
    printf("Input second number of pair: ");
    scanf("%d",&y);

    if(x>y){
        printf("The pair is in descending order!\n");
    }else{
        printf("The pair is in ascending order!\n");
    }
}