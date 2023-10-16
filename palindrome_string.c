#include <stdio.h>
int Lenth(char a[])
{
    int c=0;
    for(int i=0 ;a[i]!='\0';i++)
    {
        c++;
    }
    return c;
}
int main()
{
    int i,j,k=0;
    char name[300];
    printf("Enter Sentence:");
    scanf("%[^\n]",&name);
    int size=Lenth(name);
    char name_2[300];
    for(i=0 ; i<size ;i++)
    {
        name_2[i]=name[size-1-i];
    }
    name_2[i]='\0';

    for( i=0 ; i<size ; i++)
    {
        if(name[i]!=name_2[i])
        {
            k=1;
        }
    }
    if(k==0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not-Palindrome\n");
    }



}
