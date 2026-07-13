 /*
 Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
 */


#include<stdio.h>
int main(){
    int sec,total,h,m,s;

    printf("CONVERT SECONDS INTO HOURS:MINUTES:SECONDS\n");
    printf("========================================\n");

    printf("Input seconds:");
    scanf("%d",&sec);
    printf("\n");

    // hours
    h = (int)sec/3600;

    sec=sec-(h*3600);
    m = (int)sec/60;
   
    sec = sec -(m*60);

    s= (int)sec;

    printf("H:M:S=%d:%d:%d\n",h,m,s);
    return 0;

}
