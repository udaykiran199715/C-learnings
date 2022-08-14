#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int tableNum;
    int startSize, reSize;
    printf("Enter table number");
    scanf("%d", &tableNum);
    printf("Enter initial size: ");
    scanf("%d", &startSize);

    ptr = (int *)malloc(startSize * sizeof(int));

    for (int i = 0; i < startSize; i++)
    {
        printf(" %d x %d = %d\n", tableNum, i + 1, tableNum * (i + 1));
    }

    printf("Enter  resize: ");
    scanf("%d", &reSize);
    // ptr = realloc(ptr, reSize * sizeof(int));

    for (int i = 0; i < reSize; i++)
    {
        printf(" %d x %d = %d\n", tableNum, i + 1, tableNum * (i + 1));
    }

    return 0;
}