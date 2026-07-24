/*
 Find integers divisible by 7 with a remainder of 2 or 3

Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
Test Data :
Input the first integer: 25
Input the second integer: 45
Expected Output:
30
31
37
38
44
*/

#include<stdio.h>
int main(){
   int x,y,i,temp;

   printf("Find integers divisible by 7 with a remainder of 2 or 3\n");
   printf("-------------------------------------------------------\n");

   printf("Input the first interger : ");
   scanf("%d",&x);
   printf("Input the second interger : ");
   scanf("%d",&y);

   //swap the value if x greater than y

   if(x>y){
    temp = y;
    y = x;
    x= temp;
   }

   for(i=x+1;i<y;i++){
    if((i % 7) == 2 || (i % 7) == 3){
        printf("Output : %d\n",i);
    }
   }

}