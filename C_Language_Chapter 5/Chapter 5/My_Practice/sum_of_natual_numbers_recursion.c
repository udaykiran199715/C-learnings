#include <stdio.h>
int naturalSum(int n);
int main()
{
    int a = 5;
    printf("The sum of first 5 natual numbers is %d", naturalSum(a));
    return 0;
}

int naturalSum(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n + naturalSum(n - 1);
    }
}