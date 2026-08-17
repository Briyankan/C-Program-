/*Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers.
Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380 */

#include<stdio.h>
int main(){
    double a,b,c,d;
    double max,min;

    printf("ind the difference between max and min of 4 numbers\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("Input four numbers : \n");
    scanf("%lf%lf%lf%lf",&a, &b, &c, &d);

    //find the maximin among the four number 
    if(a>=b && a>=c && a>=d){
        max = a;
    }else if(b>=c && b>=d){
        max = b;
    }else if(c>=d){
        max = c;
    }else{
        max = d;
    }

    //find the minimum among the four number

    if(a<=b && a<=c && a<=d){
        min = a;
    }else if(b<=c && b<=d){
        min = b;
    }else if(c<=d){
        min = c;
    }else {
        min = d;
    }

    printf("The Max number is : %lf\n",max);
    printf("The Min number is : %lf\n",min);

    printf("Difference between Max and Min : %lf\n", max - min);
}