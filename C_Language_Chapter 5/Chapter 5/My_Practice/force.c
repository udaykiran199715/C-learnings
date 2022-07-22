#include <stdio.h>
float force(float mass);
int main()
{
    int m;
    printf("Enter the value of m\n");
    scanf("%d", &m);
    printf("The value of force in Newton is %.0f\n", force(m)); // m = 10,  %f ------> 98.000000, %.1f ---> 98.0 , %.0f ---> 98, %.2f ----> 98.00 it will the decimal values
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8; // g = 9.8 m/s
    return result;
}