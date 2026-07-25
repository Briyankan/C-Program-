/*Calculate the average of student math marks until termination

Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50
*/
#include<stdio.h>
int main(){
    int m[100],sum=0,a=0,i; // m- marks, sum = total marks , a = number of exams 
    float avg;

    printf("Calculate the average of student math marks until termination\n");
    printf("--------------------------------------------------------------\n");

    printf("Input maths marks (0 to terminate):\n ");

    for(i=0; ; i++){
        scanf("%d",&m[i]);
        if(m[i] <= 0){
            break;
        }

        sum += m[i];
        a++;
    }

    avg = (float)sum / (float)a;

    printf("Average mark in maths : %.2f",avg);
}