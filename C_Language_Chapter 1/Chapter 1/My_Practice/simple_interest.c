#include <stdio.h>

int main()
{
    int principal = 1000, rate = 10, years = 5;
    printf("Enter prinicpal amount: \n");
    scanf("%d", &principal);
    printf("Enter rate of interest: \n");
    scanf("%d", &rate);
    printf("Enter number of years: \n");
    scanf("%d", &years);

    int simpleInterest = (principal * rate * years) / 100;
    printf("Simple Interst is: %d", simpleInterest);
    return 0;
}