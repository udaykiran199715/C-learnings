#include <stdio.h>
struct employee
{
    char name[10];
    int code;
    float salary;
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    printf("The address of e1 is %u and ptr is %u \n", &e1, ptr);

    // (*ptr).code = 100;
    //------------------or----------------------
    ptr->code = 100;

    printf("The code is %d", e1.code);
    return 0;
}