#include <stdio.h>
int sum(int a, int b); // function prototype ----> takes a and b as input and returns the integer

int main()
{
    int c = sum(2, 5); // 2 and 5 are arguments
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b) // a and b are parameters
{
    int c = a + b;
    return c;
}