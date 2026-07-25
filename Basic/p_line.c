/*
Print p lines of q numbers in sequence starting from 1

Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.
Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30 
*/

#include<stdio.h>
int main(){
    int n,x,i,l=1,j;
    printf("Print p lines of q numbers in sequence starting from 1\n");
    printf("------------------------------------------------------\n");

    printf("Input number of line : ");
    scanf("%d",&n);
    printf("Number of charactersn in a line : ");
    scanf("%d",&x);

    for(i=1;i<=n;i++){
        for(j=1;j<=x;j++){
            printf("%d\t",l);
            l++;
        }
        printf("\n");
    }
}