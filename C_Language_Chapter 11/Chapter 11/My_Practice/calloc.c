#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptrI;
    // calloc --> continuos allocation
    int n;
    printf("Enter n");
    scanf("%d", &n);

    ptrI = (int *)calloc(n, sizeof(int));
    // mallow returns void to overcome that we have to typecast to integer like (int *)
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptrI[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptrI[i]);
    }

    // for float
    float *ptrF;

    ptrF = (float *)calloc(n, sizeof(float));

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of %d element of Float: ", i);
    //     scanf("%f", &ptrF[i]);
    // }

    // If nothing added in the values then it will print null values

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element of Float is %f\n", i, ptrF[i]);
    }

    return 0;
}