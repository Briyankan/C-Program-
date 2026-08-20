/*Write a C program to create enumerated data types for 7 days and display their values in integer constants.
Sun = 0
Mon = 1
Tue = 2
Wed = 3
Thu = 4
Fri = 5
Sat = 6 */

#include<stdio.h>
int main (){
    enum week {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

    printf("Sun = %d",Sun);
    printf("\nMon = %d",Mon);
    printf("\nTue = %d",Tue);
    printf("\nWed = %d",Wed);
    printf("\nThur = %d",Thur);
    printf("\nFri = %d",Fri);
    printf("\nSat = %d",Sat);
}