#include <stdio.h>
// #include <string.h>
int myStrlen(char *str)
{
    // int len = strlen(str);
    // return len;
    char *ptr = str;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;

        // *ptr++;
        //------or------
        ptr++;
    }
    return len;
}
int main()
{
    char str[40];
    printf("Enter the string\n");
    // scanf("%s", str);
    gets(str);
    printf("The lenght of string is %d", myStrlen(str));
    return 0;
}