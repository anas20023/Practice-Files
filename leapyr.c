#include<stdio.h>
int main(){


    int yr;
    printf("Enter a Year:");
    scanf("%d",&yr);

    if(yr % 4 ==0 && yr % 100 !=0){


        printf("%d is Leap Year\n",yr);
    } else if( yr % 400==0){

         printf("%d is not Leap Year\n",yr);
    } else {

        printf("%d is Normal Year\n",yr);
    }






 return 0;
}
