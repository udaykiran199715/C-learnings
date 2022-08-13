// #include <stdio.h>
// #include <string.h>
// char slice(char mainString[], int m, int n)
// {
//     char *ptr = mainString[m];
//     int len = strlen(mainString);
//     char newString[len];
//     int i = 0;
//     while (ptr >= m && ptr <= n)
//     {
//         newString[i] = *ptr;
//         ptr++;
//         i++;
//     }
//     return newString;
// }
// int main()
// {
//     char str[40];
//     gets(str);
//     char slicedString = slice(str, 3, 5);
//     printf("The sliced string is %s", slicedString);
//     return 0;
// }

// THe above code is not working

#include <stdio.h>
void mySlice(char *mainStr, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        mainStr[i] = mainStr[m + i];
        i++;
    }
    mainStr[i] = '\0';
}

// char checkingMySlice(char *mainStr, int m, int n)
// {
//     int i = 0;
//     while ((m + i) < n)
//     {
//         mainStr[i] = mainStr[m + i];
//         i++;
//     }
//     mainStr[i] = '\0';
//     return mainStr;
// }
int main()
{
    char str[40];
    printf("Enter the string\n");
    gets(str);
    mySlice(str, 5, 10);
    // checkingMySlice(str, 5, 10);
    printf("%s", str);

    return 0;
}