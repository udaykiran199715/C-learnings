#include <stdio.h>
void myStrcpy(char *str2, char *str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}
int main()
{
    char str1[20] = "uday akula";
    char str2[20];
    myStrcpy(str2, str1);
    printf("str2 is %s", str2);
    return 0;
}