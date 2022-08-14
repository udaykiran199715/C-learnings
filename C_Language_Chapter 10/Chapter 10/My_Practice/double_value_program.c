#include <stdio.h>

int main()
{
    int num;
    FILE *ptr1, *ptr2;
    ptr1 = fopen("double.txt", "r");

    fscanf(ptr1, "%d", &num);
    printf("Num is %d", num);
    ptr2 = fopen("double.txt", "w");
    fprintf(ptr2, "%d", num * 2);

    return 0;
}