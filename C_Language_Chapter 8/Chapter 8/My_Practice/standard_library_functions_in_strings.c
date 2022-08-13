#include <stdio.h>
#include <string.h>

int main()
{

    // strlen
    char *strL = "Uday akula";
    int a = strlen(strL);
    // printf("The length of the string st is %d", a);

    // strcpy
    char *strCP1 = "Uday King";
    char strCP2[50];
    strcpy(strCP2, strCP1); // strcpy(target, source)
    // printf("The strCP2 is %s", strCP2);

    // strcat
    char strCA1[40] = "Uday";
    char *strCA2 = "Akula";
    strcat(strCA1, strCA2);
    // printf("THe strCA1 is %s", strCA1);

    // strcmp
    char strCM1[40] = "Akul";
    char *strCM2 = "akul";
    int val = strcmp(strCM1, strCM2); // it compare the ascii values of the first string and second string based on it return the positive or negative values. If both the strings are same it returns 0
    printf("The val is %d", val);

    return 0;
}