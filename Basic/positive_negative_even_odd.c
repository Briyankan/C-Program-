/*Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.*/

#include<stdio.h>
int main(){
    int i;
    printf("Check if an integer is positive/negative and even/odd\n");
    printf("======================================================\n");

    printf("Input an interger: ");
    scanf("%d",&i);

    if(i>0){
        if(i%2 == 0){
            printf("Positive Even");
        }else{
            printf("Positive Odd");
        }
    }
     if(i<0){
        if(i%2 == -1){
            printf("Negative Odd");
        }else {
            printf("Negative Even");
        }
    }

    if(i == 0){
        printf("Your interger is Zero Value");
    }

    printf("\n");
}