#include<stdio.h>

int main(){

        int height;
        int base;
        int perimeter ;


        printf("Enter of Height: ");
        scanf("%d",&height);

        printf("Enter The side: ");
        scanf("%d", &base);

        perimeter = 2 * (height + base);

        printf("The Perimeter OF The Rectangle is : %d " , perimeter  );


    return 0;
}