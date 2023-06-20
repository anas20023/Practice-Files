#include<stdio.h>

int main(){

        int num1;
        int num2;
    
    
        

        printf("Enter 1st Number: ");
        scanf("%d",&num1);

        printf("Enter 2nd Number: ");
        scanf("%d",&num2);

        if (num1<num2)
        {
           printf("The Smallest Number Is: %ds\n" ,num1);
        } 
        
        
        else
        {
            printf("The Smallest Number Is: %d\n" ,num2);
        }
        


    return 0;
}