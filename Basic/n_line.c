/*
Print n lines of 3 consecutive numbers starting from 1

Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
*/

#include<stdio.h>
int main(){
    int n,i,j=1,x=0;
    printf("Print n lines of 3 consecutive numbers starting from 1\n");
    printf("------------------------------------------------------\n");

    printf("Input number of lines : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        while(x<3){
            printf("\t%d",j++);
            x++;
        }
        x=0;
        printf("\n");
    }

}