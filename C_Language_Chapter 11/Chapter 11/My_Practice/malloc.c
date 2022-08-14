#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptrI;

    // mallow ---> memory allocation

    // size of operator in c
    // printf("The size of int on my PC is %d\n", sizeof(int));
    // printf("The size of float on my PC is %d\n", sizeof(float));
    // printf("The size of char on my PC is %d\n", sizeof(char));

    ptrI = (int *)malloc(6 * sizeof(int));
    // mallow returns void to overcome that we have to typecast to integer like (int *)
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptrI[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptrI[i]);
    }

    // for float
    float *ptrF;

    ptrF = (float *)malloc(6 * sizeof(float));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element of Float: ", i);
        scanf("%f", &ptrF[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element of Float is %f\n", i, ptrF[i]);
    }

    return 0;
}