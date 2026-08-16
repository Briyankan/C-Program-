/*
 Print positions and values of elements in an array < 5

Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
Test Data:
Input the 5 members of the array:
15
25
4
35
40
Expected Output:
A[2] = 4.0
*/

#include<stdio.h>
int main(){
    float A[5];
    int i,x;

    printf("Print the positions and values of elements in asn array \n");
    printf("--------------------------------------------------------\n");

    printf("Input the 5 number of array : \n");
    for(i=0;i<5;i++){
        scanf("%d",&x);
        A[i] = x;
    }

    for(i=0;i<5;i++){
        if(A[i]<5){
            printf("A[%d] = %.2f",i,A[i]);
            printf("\n");
        }
    }
 return 0 ;
}