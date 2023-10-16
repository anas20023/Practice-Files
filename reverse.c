#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char n_1[300];
    printf("Enter a Sentence / Word :");
    gets(n_1);

    char n_2[300];
    int s=strlen(n_1);

    for(int i=0 ; i<s ; i++)
    {
        n_2[i]=n_1[s-1-i];
    }
    n_2[i]='\0';
    printf("Reversed String is :\n%s\n",n_2);
}
