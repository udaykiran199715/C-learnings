#include <stdio.h>
int factorial(int a);

int main()
{
    int fact = factorial(4);
    printf("THe factorial of 4 is %d", fact);
    return 0;
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}