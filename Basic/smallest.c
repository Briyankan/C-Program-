/*
Find the smallest element in an array and its position

Write a C program to read an array of length 6 and find the smallest element and its position.
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3
*/

#include<stdio.h>
int main(){
    int a[5],i;
    printf("smallest element in an array and its position\n");
    printf("----------------------------------------------\n");

    printf("Input the length of the array: ");
    printf("\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
}