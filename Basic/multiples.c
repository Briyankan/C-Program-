/*
Write a C program that reads two integers and checks whether they are multiplied or not.
*/

#include<stdio.h>
int main(){
    int a,b; // these are interger values 

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    if(a%b == 0){
        printf("Multiplied!");
    }else{
        printf("Not Multiplied!");
    }
}