/*
Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
*/

#include<stdio.h>
int main(){
    int day,total;

    printf("Convert days to years, months, days\n");
    printf("-----------------------------------\n");

    // Input days from user
    printf("Enter the number of days:");
    scanf("%d",&day);

    //years
    total=(int)day/365;
    printf("%d Year(s)\n",total);
    day = day -(total*365);

    // months
    total=(int)day/30;
    printf("%d Month(s)\n",total);
    day = day -(total*30);

    //days
    printf("%d Day(s)\n",day);
}