#include <stdio.h>

int main()
{
    int n;
    printf("Enter the table name: ");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("multiplication_table.txt", "w");
    fprintf(ptr, "The Multiplication table of %d is \n", n);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d \n", n, i, n * i);
    }
    fclose(ptr);
    printf("Completed. Please check multiplication_table.txt file for the table %d.", n);
    return 0;
}