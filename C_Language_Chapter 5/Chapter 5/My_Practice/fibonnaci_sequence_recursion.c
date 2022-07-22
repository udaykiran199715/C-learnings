#include <stdio.h>
int fib(int a);
int main()
{
    printf("The fibonacci sequence of 9 is %d\n", fib(9));
    return 0;
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}