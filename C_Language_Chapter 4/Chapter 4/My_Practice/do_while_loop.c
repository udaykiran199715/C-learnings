#include <stdio.h>

int main()
{
    // int i = 0;
    // int i = 220;

    // do
    // {
    //     printf("The value of i is %d\n", i);
    //     i++;
    // } while (i < 10);
    // return 0;

    // int n, i = 1;
    // printf("Enter n\n");
    // scanf("%d", &n);

    // do
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i <= n);

    // break
    int n, i = 1;
    printf("Enter n\n");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
        i++;
    } while (i <= n);
}