#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool checkCharacter(char mainStr[], char mainC)
{
    int i = 0;
    bool check = false;
    while (i <= (strlen(mainStr) - 1))
    {
        if (mainStr[i] == mainC)
        {
            // count++;
            check = true;
            break;
        }
        i++;
    }

    return check;
}
int main()
{
    char str[] = "uday kiran";
    char c = 'z';
    if (checkCharacter(str, c))
    {
        printf("The given character is present in the string\n");
    }
    else
    {
        printf("The given character is not present in the string\n");
    }
    return 0;
}