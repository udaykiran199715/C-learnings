#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptrI1, *ptrI2;

    ptrI1 = (int *)malloc(600 * sizeof(int));
    // mallow returns void to overcome that we have to typecast to integer like (int *)
    for (int i = 0; i < 600; i++)
    {
        ptrI2 = (int *)malloc(6000000 * sizeof(int));
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptrI1[i]);
        free(ptrI2);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptrI1[i]);
    }

    return 0;
}