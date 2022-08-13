#include <stdio.h>
struct employee
{
    char name[10];
    int code;
    float salary;
};
int main()
{
    struct employee teacher = {"Uday", 1, 123.12};
    // struct employee teacher = {0}; // all elements in the structure intialize to 0

    printf("Name is: %s\n", teacher.name);
    printf("Code is: %d\n", teacher.code);
    printf("Salary is: %f\n", teacher.salary);

    return 0;
}