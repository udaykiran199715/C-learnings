#include <stdio.h>

int main()
{
    // int a;
    // printf("enter a : \n");
    // scanf("%d", &a);
    // while (a < 10)
    // {
    //     printf("%d\n", a);
    //     a++;
    // }

    // int i = 0;
    // int start = 10;
    // while (i <= 10)
    // {
    //     printf("%d\n", start);
    //     start++;
    //     i++;
    // }

    // continue
    int i = 0;
    int skip = 5;
    while (i < 10)
    {
        if (i == skip)
        {
            i++;
            continue;
        }
        else
        {
            printf("The value of i is %d\n", i);
            i++;
        }
    }
    return 0;
}