#include <stdio.h>
int sum(int a, int b);
// in call by value will pass the variables or the values in the arguments while calling the function
int main()
{
    int a = 10;
    int b = 5;
    printf("The values of a and b before calling the function is %d and %d is\n", a, b);
    printf("The sum of a and b is %d\n", sum(a, b));
    printf("The values of a and b after calling the function is %d and %d is\n", a, b);
    // the a and b values will not change
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    a = 12312;
    b = 1321321;
    return c;
}