#include <stdio.h>

int main()
{
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("The value of k is %d", **k);
    return 0;
}