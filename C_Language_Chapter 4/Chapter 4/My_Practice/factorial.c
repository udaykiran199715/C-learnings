#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int factorial = 1;

    // using for loop
    // for (int i = n; i >= 1; i--)
    // {
    //     factorial *= i;
    // };

    // using while
    // int i = n;
    // while (i >= 1)
    // {
    //     factorial *= i;
    //     i--;
    // }

    // using do while
    int i = n;
    do
    {
        factorial *= i;
        i--;
    } while (i >= 1);
    printf("The factorial of given number is %d in do while", factorial);

    return 0;
}