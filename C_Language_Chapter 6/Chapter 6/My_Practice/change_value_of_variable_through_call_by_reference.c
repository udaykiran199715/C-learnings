#include <stdio.h>

// call by reference
void getValue(int *a)
{
    *a = 10 * *a;
    // *a = *a * 10; // both will work
}

// call by value
void call_by_Value(int a)
{
    a = 10 * a;
}
int main()
{
    int i = 4;
    getValue(&i);
    // call_by_Value(i); // will not change the i value
    printf("The value of i is %d", i);
    return 0;
}