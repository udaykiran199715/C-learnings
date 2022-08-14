#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int startSize, reSize;
    printf("Enter initial size: ");
    scanf("%d", &startSize);

    ptr = (int *)malloc(startSize * sizeof(int));
    for (int i = 0; i < startSize; i++)
    {
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < startSize; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptr[i]);
    }

    printf("Enter  resize: ");
    scanf("%d", &reSize);
    // ptr = realloc(ptr, reSize * sizeof(int));
    ptr = (int *)calloc(reSize, sizeof(int));
    for (int i = 0; i < reSize; i++)
    {
        printf("Enter the value of %d element of Integer: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < reSize; i++)
    {
        printf("The value of %d element of Integer is %d\n", i, ptr[i]);
    }

    return 0;
}