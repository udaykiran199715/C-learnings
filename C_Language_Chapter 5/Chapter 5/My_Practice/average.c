#include <stdio.h>
float findAverage(int a, int b, int c);
int main()
{
    // int a = 3;
    // int b = 4;
    // int c = 5;
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    float getAverage = findAverage(a, b, c);
    printf("The average of %d, %d and %d is %f\n", a, b, c, getAverage);
    return 0;
}

float findAverage(int a, int b, int c)
{
    float average = (float)(a + b + c) / 3; // if you not use float before (a+b+c) will get wrong values because in parameters we mentioned a,b and c are integeres so the output also will get integer thats why use float
    return average;
}