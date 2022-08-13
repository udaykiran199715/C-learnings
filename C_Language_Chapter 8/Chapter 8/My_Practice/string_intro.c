#include <stdio.h>

int main()
{
    // char str[] = {'U', 'd', 'a', 'y', '\0'}; // \0 is a null pointer indicates its the endpoint of the string
    //---------------------or------------------------------
    // char str[] = "Uday"; // the compiler handles the null pointer(\0)
    // char *ptr = str;
    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }

    // convenient way to print string
    // char *ptr = "Uday bhai";
    // ------------------------or-------------------
    char ptr[] = "Uday bhai";
    printf("%s", ptr);

    return 0;
}