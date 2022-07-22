#include <stdio.h>

int main()
{
    int a = 3;
    printf("The values are %d %d %d\n", a, ++a, a++);
    // output 5 5 3 ----> In gcc in printf it checks from right to left the order is varies from compiler to compiler
    // a++ -> 3
    // ++a -> 5
    // a -> 5
    return 0;
}