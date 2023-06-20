#include<stdio.h>

 int main(){

        char a;
        char b;


        printf("Enter Your Favourite Drink's Name: [Milk/Coffee] ");
        scanf("%s", &a);


         printf(" Do you Know ? How to make %s ?\n [y or n] ", &a);


        scanf("%s" ,&b);
           
            switch (b)
            {
            case 'y': printf("Take a Cup & make it as you like");
                break;

                case 'n' : printf("You Should Try Alcohol");
                break;
            
            default: printf("Invalid Input");
                break;
            }


        










    return 0;

 }