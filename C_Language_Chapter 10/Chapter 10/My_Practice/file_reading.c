#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("number.txt", "r");
    if (ptr == NULL)
    {
        printf("File doest not exist");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr); // good practice
        printf("Num1 and Num2 is %d and %d", num1, num2);
    }
    return 0;
}