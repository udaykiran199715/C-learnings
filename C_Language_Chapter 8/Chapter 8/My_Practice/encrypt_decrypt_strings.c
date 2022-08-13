#include <stdio.h>
void encrypt(char *mainStr)
{
    char *ptr = mainStr;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1; // we are adding +1 to the ascii value of the original one
        ptr++;
    }
}
void decrypt(char *mainStr)
{
    char *ptr = mainStr;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1; // we are subtracting -1 to the ascii value of the original one
        ptr++;
    }
}
int main()
{
    char str[30]; // dont intialize with *str because while encrypting we have to access each and every value in the string
    printf("Enter the string: ");
    gets(str);
    encrypt(str);
    printf("The encrypted string is %s\n", str);
    decrypt(str);
    printf("The decrypted string is %s\n", str);
    return 0;
}