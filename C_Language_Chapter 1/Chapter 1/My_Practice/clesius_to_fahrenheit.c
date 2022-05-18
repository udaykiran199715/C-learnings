#include <stdio.h>

int main()
{
    float celsius = 12, far;
    printf("Enter the celsius degree temperature: \n");
    scanf("%f", &celsius);
    far = (celsius * 9 / 5) + 32;
    printf("The value of this celsius temperature in fahrenheit is: %f", far);
    return 0;
}