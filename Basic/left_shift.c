/*Write a C program to shift given data by two bits to the left.
Input value : 2
Read the integer from keyboard-
Integer value = 2 */

#include<stdio.h>
int main(){
    int i,result;

    printf("Left-shift an integer by two bits\n");
    printf("---------------------------------\n");

    printf("Input value : ");
    scanf("%d",&i);

    printf("Read the integer from keyboard - interger value = %d\n",i);

    result = i << 2;

    printf("The left-shift data is = %d\n",result);
}