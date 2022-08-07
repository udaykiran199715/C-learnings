#include <stdio.h>

int main()
{
    int i = 12;
    int *ptrI = &i;
    printf("The value of prtI is %u\n", ptrI);

    char c = 'a';
    char *ptrC = &c;
    printf("The value of prtC is %u\n", ptrC);

    // float f = 1.5;
    // float *ptrF = &f;
    // printf("The value of prtF is %u\n", ptrF);

    int i1 = 13;
    int *ptrI1 = &i1;
    printf("The value of prtI is %u\n", ptrI1);

    printf("The differnce between ptrI and ptrI1 is %d", ptrI - ptrI1);

    return 0;
}