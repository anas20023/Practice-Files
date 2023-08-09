#include<stdio.h>

int main(){


    int n,m;
    printf("Enter a Number:");
    scanf("%d" ,&n);
    printf("Enter a Number to Divide:");
    scanf("%d" ,&m);

    if(n % m==0){

        printf("Yes !!! %d is Divisible with %d\n" ,n,m);

    } else {

     printf("No !! %d is NOT Divisible with %d\n" ,n,m);
    }





 return 0;
}
