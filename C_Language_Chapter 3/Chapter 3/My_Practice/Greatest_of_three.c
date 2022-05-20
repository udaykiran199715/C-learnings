#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter first number \n");
    scanf("%d", &num1);
    printf("Enter second number \n");
    scanf("%d", &num2);
    printf("Enter thrid number\n");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("First number is greatest i.e., %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Second number is greatest i.e., %d", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("Thrid number is greatest i.e., %d", num3);
    }
    else
    {
        printf("The given numbers are equal");
    }

    return 0;
}