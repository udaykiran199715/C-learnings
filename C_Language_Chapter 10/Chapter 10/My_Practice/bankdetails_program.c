#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("bankdetails.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        char name[100];
        int salary;
        printf("Enter the name of the employee: ");
        // scanf("%s", name);
        gets(name);
        printf("Enter the salary: ");
        scanf("%d", &salary);
        // printf("Name and salary is %s and %d\n", name, salary);
        fprintf(ptr, "%s, %d\n", name, salary);
    }
    fclose(ptr);

    return 0;
}