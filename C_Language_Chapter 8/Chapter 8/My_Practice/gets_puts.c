#include <stdio.h>

int main()
{
    char st[40];
    printf("Enter your name: ");
    gets(st); // if takes the whole string include spaces
    // printf("Your name is %s", st);
    puts(st);

    return 0;
}