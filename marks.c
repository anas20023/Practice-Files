#include<stdio.h>

int main(){

        int marks;
        printf("Enter your Physics Exam's Marks: ");
        scanf("%d",&marks);

        if(marks>=90){
            printf("Congratulaions !! You got Golden A+ \n");
            }
            
            else if (marks < 90 && marks >= 80 )
            {
                printf("Congratulations !! You got A+ \n");

             }

            else if (marks < 80 && marks >= 70 )
            {
                printf("Congratulations !! You got A Grade\n");

             }

             else if (marks < 69 && marks >= 60 )
            {
                printf("Congratulations !! You got A- \n");

             }

             else if (marks < 59 && marks >= 40 )
            {
                printf("Congratulations !! You got B Grade \n ");

             }
             
             else if (marks < 39 && marks >= 33 )
            {
                printf("Congratulations !! You got C Grade \n");

             }

            else{

                printf("Unluckey !!! You Are Failed !! Good Luck For Next Exam <3 \n");
                
            }

            printf(" Thanks For Using My Programme \n");

             
            


    return 0;
}