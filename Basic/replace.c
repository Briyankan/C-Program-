/*
Replace negatives and zeros in an array with 100, then print

Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
Test Data:
Input the 5 members of the array:
25
45
35
65
15

Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15
*/

#include<stdio.h>
int main(){
    int n[5],i,x;

    printf("Replace negatives and zeros in an array with 100, then print\n");
    printf("------------------------------------------------------------\n");

    printf("Input the 5 number of the array: \n");
    for(i=0;i<5;i++){
        scanf("%d",&x);
        if(x>0){
            n[i] = x;
        }else{
            n[i]=100;
        }
    }

    printf("Array values are : \n");
    for(i=0;i<5;i++){
        printf("n[%d] = %d\n",i,n[i]);
    }
}