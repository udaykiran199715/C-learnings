#include <stdio.h>

int main()
{
    int principal = 1000, rate = 10, years = 5;
    int simpleInterest = (principal * rate * years) / 100;
    printf("Simple Interst is: %d", simpleInterest);
    return 0;
}