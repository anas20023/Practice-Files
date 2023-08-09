#include<stdio.h>

int main(){

    int n;
    printf("Enter a Number:");
    scanf("%d" , &n);


    if(n >0){

        printf("%d is Positive Number\n",n);
    } else if(n<0){

        printf("%d is Negative Number\n",n);

    } else if(n==0){

        printf("Given Value is %d\n" ,n);
    }

 return 0;

}
