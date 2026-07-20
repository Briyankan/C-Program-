/*Write a C program that read 5 numbers and sum of all odd values between them.*/

#include<stdio.h>
int main(){
    int a[5],sum=0,j;

printf("Sum all ODD values among 5 inputs\n");
printf("==================================\n");

printf("Input the first number: ");
scanf("%d",&a[0]);
printf("Input the second number: ");
scanf("%d",&a[1]);
printf("Input the third number: ");
scanf("%d",&a[2]);
printf("Input the fourth number: ");
scanf("%d",&a[3]);
printf("Input the fifth number: ");
scanf("%d",&a[4]);

for(j=0;j<5;j++){
    if(a[j]%2==1){
        sum += a[j];
    }
}

printf("\nSum of all odd values: %d",sum);
printf("\n");




}