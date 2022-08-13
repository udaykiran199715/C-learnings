#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int code;
    float salary;
};
void show(struct employee emp)
{
    printf("Name is: %s\n", emp.name);
    printf("Code is: %d\n", emp.code);
    printf("Salary is: %f\n", emp.salary);
}

int main()
{
    struct employee e1;
    strcpy(e1.name, "Uday");
    e1.code = 101;
    e1.salary = 123.123;

    show(e1);

    return 0;
}