#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    // straight order
    // for (int i = 1; i < 11; i++)
    // {
    //     printf("%d x %d = %d\n", n, i, n * i);
    // }

    // reverse order
    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}