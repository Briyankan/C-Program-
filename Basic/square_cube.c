/* Print numbers with their squares and cubes for n lines

Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
*/

#include<stdio.h>
#include<math.h>

int main(){
    int n,j=1,x,y;
    long long i;
    printf("Print numbers with their squares and cubes for n lines\n");
    printf("-------------------------------------------------------\n");

    printf("Input the number of lines : ");
    scanf("%d",&n);

    for(i =1; i<=n ;i++){
        printf("%lld %lld %lld\n",i,i*i,i*i*i);
    }

}