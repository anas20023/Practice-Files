#include<stdio.h>

int main(){

  char upr,lwr;


  printf("Enter a Uppercase Alphabet: ");
  scanf("%c" , &upr);

  lwr=upr+32;

  printf("Lowercase is:%c\n\n ",lwr);

return 0;
}
