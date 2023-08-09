#include<stdio.h>
int main()
{


    int i,n,sum;
    sum=0;
    printf("Enter a Number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {

        sum+=i;


    }
    printf("Sum of First %d Number is : %d",n,sum);






    return 0;
}
