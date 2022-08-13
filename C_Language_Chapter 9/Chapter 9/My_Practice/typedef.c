#include <stdio.h>
#include <string.h>

// if we use typedef we can avoid writing the struct employee every time simple we can write empDetails
// alias
typedef struct employee
{
    char name[20];
    int code;
    float salary;
} empDetails;
void show(empDetails emp)
{
    printf("Name is: %s\n", emp.name);
    printf("Code is: %d\n", emp.code);
    printf("Salary is: %f\n", emp.salary);
}

int main()
{
    empDetails e1;
    empDetails *ptr;
    ptr = &e1;
    strcpy(ptr->name, "Uday");
    ptr->code = 101;
    ptr->salary = 123.123;
    show(e1);

    return 0;
}