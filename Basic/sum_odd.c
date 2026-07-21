/* Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24 */

#include<stdio.h>
int main(){
    int i,j,k,max=0;

    printf("Sum odd numbers between two given integers\n");
    printf("-------------------------------------------\n");

    printf("Input first number of the pair: ");
    scanf("%d",&i);
    printf("Input second number of the pair: ");
    scanf("%d",&j);

    if(i < j){
        return 0;
    }

    printf("\nList of add numbers: \n");
    for(k=j; k<=i; k++){
        if(k%2 == 1){
            printf("%d\n",k);
            max += k;
        }
    }

    printf("\nSum of the odd numbers: %d\n",max);
    
}