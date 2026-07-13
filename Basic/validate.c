/*
Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. 
If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
*/

#include<stdio.h>
int main(){
    int p,q,r,s,sum1,sum2;

    printf("Input 1st number:");
    scanf("%d",&p);
    
    printf("Input 2nd number:");
    scanf("%d",&q);

    printf("Input 3rd number:");
    scanf("%d",&r);

    printf("Input 4th number:");
    scanf("%d",&s);

    sum1 = r + s;
    sum2 = p + q;
   
    if(p>0 && q>0 && r>0 && s>0 && p%2 == 0 && q>r && s>p && sum1>sum2){
        printf("Correct value");
    }else{
        printf("Wrong values");
    }
    
}