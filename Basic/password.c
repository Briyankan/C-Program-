/*
Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, "Correct password" and quit the program. The correct password is 1234.
Test Data :
Input the password: 1234
Expected Output:
Correct password
*/

#include<stdio.h>
int main(){
    int pass,x=10;

    while(x!=0){

    printf("Enter your password : ");
    scanf("%d",&pass);

    if(pass == 1234){
        printf("Your password is correct\n");
        x=0;
    }else{
        printf("Incorrect password! try again\n");
    }

    }


}