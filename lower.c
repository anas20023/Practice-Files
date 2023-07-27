#include<stdio.h>

int main(){

    char upr,lwr;

    printf("Enter a lowercase Alphabet:");
    scanf("%c" ,&lwr);
    upr=lwr-32;

    printf("UpperCase is: %c\n\n",upr);

return 0;

}
