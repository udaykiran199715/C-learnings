#include <stdio.h>

int main()
{

    int n = 0;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int sum = 0;

    // using for loop
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // using while loop
    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    // using do while
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The sum is %d in do while", sum);
    return 0;
}