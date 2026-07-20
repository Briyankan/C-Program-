/*Write a C program to find and print the square of all the even values from 1 to a specified value.*/\

#include<stdio.h>
int main(){

    int n,i;

    printf("Print squares of all even numbers up to a given value\n");
    printf("=====================================================\n");

    printf("input the number:");
    scanf("%d",&n);

    printf("\nList of square of each one of the even values from 1 to %d\n",n);

    for(i=2;i<=n;i++){
        if(i%2==0){
           printf("%d ^ 2 = %d\n",i,i*i);
        }
    }



}