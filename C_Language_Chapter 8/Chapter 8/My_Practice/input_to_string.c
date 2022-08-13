#include <stdio.h>

int main()
{
    char st[4];
    printf("Enter your name: ");
    scanf("%s", st); // it wil not take the spaces in the string only it takes the first word
    printf("Your name is %s", st);

    return 0;
}