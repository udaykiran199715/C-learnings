#include <stdio.h>

struct employee
{
    char name[10];
    int code;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the name of the employee for e1: ");
    scanf("%s", e1.name);
    printf("Enter the code of the employee for e1: ");
    scanf("%d", &e1.code);
    printf("Enter the name of the employee for e1: ");
    scanf("%f", &e1.salary);

    printf("Enter the name of the employee for e2: ");
    scanf("%s", e2.name);
    printf("Enter the code of the employee for e2: ");
    scanf("%d", &e2.code);
    printf("Enter the name of the employee for e2: ");
    scanf("%f", &e2.salary);

    printf("Enter the name of the employee for e3: ");
    scanf("%s", e3.name);
    printf("Enter the code of the employee for e3: ");
    scanf("%d", &e3.code);
    printf("Enter the name of the employee for e3: ");
    scanf("%f", &e3.salary);

    return 0;
}
