#include<stdio.h>

int main(){

        float one;
        float two;
        float three;
        float avarege;
       

        printf("Enter 1st Number: ");
        scanf("%f", &one); 

         printf("Enter 2nd Number: ");
        scanf("%f", &two);

         printf("Enter 3rd Number: ");
        scanf("%f", &three);

         avarege =  (one + two + three)/3;

        printf("The Avarage is:%f ", avarege);

    return 0;
}