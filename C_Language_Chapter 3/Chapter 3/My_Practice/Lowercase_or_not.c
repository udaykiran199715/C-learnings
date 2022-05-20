#include <stdio.h>

int main()
{
    // 97 - 112 = a - z ASCII value range for smaller letters
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 112)
    {
        printf("It is a lower case");
    }
    else
    {
        printf("It is not a lower case");
    }
    return 0;
}