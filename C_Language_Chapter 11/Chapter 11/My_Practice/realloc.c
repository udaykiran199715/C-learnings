#include <stdio.h>
#include <stdlib.h>

int main()
{
    // realloc --> re-allocation ---> max, min
    int *ptr;

    ptr = (int *)malloc(6 * sizeof(int));
    // mallow returns void to overcome that we have to typecast to integer like (int *)
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptr[i]);
    }

    return 0;
}