#include <stdio.h>

int main()
{
    // for (int a; a < 10; a++)
    // {
    //     printf("The value of a is %d\n", a);
    // }

    // int n;
    // printf("enter the value of n\n");
    // scanf("%d", &n);

    // for (int a = n; a > 0; a--)
    // {
    //     printf("The value of a is %d\n", a);
    // }

    // break
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    for (int a = n; a > 0; a--)
    {
        printf("The value of a is %d\n", a);
        if (a == 5)
        {
            break;
        }
    }

    return 0;
}