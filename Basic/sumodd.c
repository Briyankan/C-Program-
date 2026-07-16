#include<stdio.h>
int main(){
    int a[5],j,sum=0;

    printf("Input the first number:");
    scanf("%d",&a[0]);
    printf("Input the second number:");
    scanf("%d",&a[1]);
    printf("Input the third number:");
    scanf("%d",&a[2]);
    printf("Input the forth number:");
    scanf("%d",&a[3]);
    printf("Input the fifth number:");
    scanf("%d",&a[4]);

    for(j=0;j<5;j++){
        if((a[j]%2) == 1){
             sum += a[j];
        }else{
            printf("Your number is not odd number !");
        }
    }


    printf("\nSum of the all odd number values:%d",sum);
}
