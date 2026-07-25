/*
 Compute series sum S=1+1/2+1/3+...+1/50

Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
Expected Output:
Value of S: 4.50
*/

#include<stdio.h>
int main(){
    int i;
    float sum=0;

    printf("Compute series sum S=1+1/2+1/3+...+1/50\n");
    printf("---------------------------------------\n");

    for(i=1;i<=50;i++){
        sum +=(float)1/i;
    }

    printf("The value is : %.2f",sum);

    
    
}