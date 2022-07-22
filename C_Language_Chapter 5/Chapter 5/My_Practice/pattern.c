#include <stdio.h>
void printPattern(int n);

int main()
{
    printPattern(4);
    return 0;
}

// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// 2*n -1   ---? formula

void printPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    };
    printPattern(n - 1);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }

    printf("\n");
}