
/*Write a C program that prints all even numbers between 1 and 50 (inclusive).*/

#include <stdio.h>

int main()
{
   int i;
   printf("Even Number between 1 to 50\n");
   printf("===========================\n");
   
   for(i=0;i<=50;i++){
       if(i%2 ==0){
           printf("%d\t",i);
       }
   }
    return 0;
}

