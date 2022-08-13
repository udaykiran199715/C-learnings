#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee e1;
    e1.code = 100;
    e1.salary = 345.12;
    // e1.name = "Uday"; // this wont work
    strcpy(e1.name, "uday");

    printf("code is %d \n", e1.code);
    printf("salary is %f \n", e1.salary);
    printf("name is %s \n", e1.name);

    return 0;
}