#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    bool isPrime = true;

    // using for loop
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }

    // printf("itPrime is %d\n", isPrime);

    // using while loop
    // int i = 2;
    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    //     else
    //     {
    //         i++;
    //         continue;
    //     }
    // }

    // using do while
    int i = 2;
    do
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            i++;
            continue;
        }
    } while (i < n);

    if (isPrime || n == 2)
    {
        printf("The given number %d is prime in while\n", n);
    }
    else
    {
        printf("The given number %d is not a prime number in while\n", n);
    }
    return 0;
}