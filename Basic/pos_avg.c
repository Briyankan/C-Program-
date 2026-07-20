/*Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.*/

#include<stdio.h>
int main(){
    float n[5],avg,total=0;
    int j,pctr=0;
    
    printf("Count positives and calculate their average from 5 inputs\n");
    printf("=========================================================\n");
    
    printf("Input the first Number: ");
    scanf("%f",&n[0]);
    printf("Input the second Number: ");
    scanf("%f",&n[1]);
    printf("Input the third Number: ");
    scanf("%f",&n[2]);
    printf("Input the forth Number: ");
    scanf("%f",&n[3]);
    printf("Input the fifth Number: ");
    scanf("%f",&n[4]);
    
    for(j=0;j<5;j++){
        if(n[j]>0){
            pctr++;
            total += n[j];
        }
    }
    
    avg = total/pctr;
    
printf("\n Number of positive numbers: %d",pctr);
printf("\n Average value of the said positive numbers: %.2f",avg);
printf("\n");
    
    
}
