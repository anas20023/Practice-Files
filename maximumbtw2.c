#include <stdio.h>
int main()
{

    int a, b, c, max;
    printf("Enter 1st Number:");
    scanf("%d", &a);
    printf("Enter 2nd Number:");
    scanf("%d", &b);
    printf("Enter 3rd Number:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    } 
    printf("%d is the Maximum Number of All\n", max);

    return 0;
}
