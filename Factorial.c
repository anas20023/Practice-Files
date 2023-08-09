#include<stdio.h>
int main()
{


    int k,n,fact;
    ///float fact;
    fact=1;
    printf("Enter a value ,You want the factorial of that:\t");
    scanf("%d",&n);


    for(k=1; k<=n; k++)
    {

        fact=fact * k;
    }

    printf("%d is the Factorial Value of %d\t", fact,n);




    return 0;


}
