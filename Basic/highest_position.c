#include<stdio.h>
int main(){
    int a[5],i,j,max=0,position=0;
    
    printf("Find the highest value and its position from inputs\n");
    printf("===================================================\n");

    printf("Input 5 Integers :\n");

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for(j=0;j<5;j++){
        if(a[j]>max){
            max=a[j];
            position=j;
        }
    }

    printf("Highest value : %d\nPosition: %d\n",max,position+1);

}

