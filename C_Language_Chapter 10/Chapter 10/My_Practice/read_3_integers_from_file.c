#include <stdio.h>

int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("integers.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The values of a, b and c is %d, %d and %d", a, b, c);
    fclose(ptr);
    return 0;
}