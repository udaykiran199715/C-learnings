#include <stdio.h>
void calculateSumandAverage(int *a, int *b, int *sum, float *average)
{
    *sum = *a + *b;
    // *average = (*a + *b) / 2;
    *average = (float)(*sum) / 2;
}

int main()
{
    int a = 5;
    int b = 10;
    int sum;
    float average;
    calculateSumandAverage(&a, &b, &sum, &average);
    printf("The sum of a and b is %d\n", sum);
    printf("The average of a and b is %f\n", average);

    return 0;
}