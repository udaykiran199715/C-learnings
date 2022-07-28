#include <stdio.h>

void printAddress(int a)
{
    printf("The address of variable a is %u\n", &a);
}

int main()
{
    int i = 4;
    printAddress(i);
    printf("The address of variable i is %u\n", &i);
    // both address are different because both are in different scopes and i is a different variable and a is a different variable
    return 0;
}