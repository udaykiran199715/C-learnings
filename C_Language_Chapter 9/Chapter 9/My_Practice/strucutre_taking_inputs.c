#include <stdio.h>
typedef struct complex
{
    int real;
    int fake;
} comp;

void printCompNum(comp mainComp, int n)
{
    printf("The Real and Fake values of compNum %d is: %d and %d\n", n, mainComp.real, mainComp.fake);
}
int main()
{
    comp compNums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Real value of compNum %d is: ", i + 1);
        scanf("%d", &compNums[i].real);
        printf("Enter Fake value of compNum %d is: ", i + 1);
        scanf("%d", &compNums[i].fake);
    }
    for (int i = 0; i < 5; i++)
    {
        printCompNum(compNums[i], i + 1);
    }
    return 0;
}