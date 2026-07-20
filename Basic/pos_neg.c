
/*Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.*/

#include<stdio.h>
int main(){
    float n[5];
    int j,pctr=0,nctr=0;
    
    printf("\nInput the first number: ");
    scanf("%f",&n[0]);
    printf("\nInput the second number: ");
    scanf("%f",&n[1]);
    printf("\nInput the third number: ");
    scanf("%f",&n[2]);
    printf("\nInput the forth number: ");
    scanf("%f",&n[3]);
    printf("\nInput the fifth number: ");
    scanf("%f",&n[4]);
    
    for(j=0;j<5;j++){
        if(n[j] > 0){
            pctr++;
        }else{
            nctr++;
        }
    }
    
    printf("\n Number of positive number:%d",pctr);
    printf("\n Number of negative number:%d",nctr);
    printf("\n");
    
    return 0;
}
