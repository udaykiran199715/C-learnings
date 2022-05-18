#include <stdio.h>

int main()
{
    int a, b;

    // for taking inputs will use scanf

    printf("Enter the value of a: \n");
    scanf("%d", &a); // & refers the value we are passing it address to a

    printf("Enter the value of b: \n");
    scanf("%d", &b); // & refers the value we are passing it address to b

    printf("Sum of the values a and b is %d", a + b);

    return 0;
}