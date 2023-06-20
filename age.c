#include<stdio.h>

        int main(){

                int age;
                printf("Enter your Age: ");
                scanf("%d" , &age);


                if (50 >= age>=18)
                {
                   printf("\n Congratulations !!! \n You are adult \n");
                   printf("You Have Ability To be a Father/Mother Now !!! \n");
                }   
                
                
                else if (age <18)
                {
                   printf(" \n \nYou are chind \n \n");
                   printf("\nGet Lost From My Programme \n");
                } 
                
                
                else if  (age >50) 
                {
                    printf("Sorry To say !!! You are old man ");

                }
                 else
                 {
                    printf("Invalid Input ! Try Again");
                 }
                 
                





            return 0;
        }