#include <stdio.h>

int main()
{
    int a = 5;
    printf("The address and value  of a is %u and %d\n", &a, *(&a));
    int *ptr;
    ptr = &a;
    printf("The value  of a is %d\n", *ptr);
    return 0;
}