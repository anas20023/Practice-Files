#include<stdio.h>

int main(){

        int x;
        int y;
        printf("Enter Your Number : ");
        scanf("%d" , &x);

        y = (x>9) && (x<100);

        printf("The Answer Is:%d" , y);



    return 0;
}