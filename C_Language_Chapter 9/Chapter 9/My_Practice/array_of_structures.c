#include <stdio.h>
#include <string.h>
struct employee
{
    char name[10];
    int code;
    float salary;
};
int main()
{
    struct employee facebook[100];

    strcpy(facebook[1].name, "Uday");
    facebook[1].code = 1;
    facebook[1].salary = 123.1231;

    strcpy(facebook[2].name, "kiran");
    facebook[2].code = 2;
    facebook[2].salary = 223.2231;

    strcpy(facebook[3].name, "Akula");
    facebook[3].code = 3;
    facebook[3].salary = 323.1231;

    printf("Done");
    return 0;
}