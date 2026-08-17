/*Write a C program to reverse and print a given number.
Input a number:
The original number = 234
The reverse of the said number = 432 */

#include<stdio.h>
int main(){
    int i,x,reverse=0;

    printf("Reverse the digits of a number\n");
    printf("------------------------------\n");

    printf("Input the number : ");
    scanf("%d",&i);

    printf("\nThe Original number is %d ", i);

    //Reverse the digits of a number

    
    while(i != 0){
        x = i % 10;
        reverse = reverse * 10 + x;
        i = i / 10;
    }

    printf("\nThe reverse of the said number = %d ",reverse);
    printf("\n");
}