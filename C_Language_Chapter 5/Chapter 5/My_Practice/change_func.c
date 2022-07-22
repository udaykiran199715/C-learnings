#include <stdio.h>
int change(int b);
int main()
{
    int b = 22;
    printf("the value of b before change is %d\n", b);
    change(b);
    printf("the value of b after change is %d\n", b);
    return 0;
}

int change(int b)
{
    b = 77;
    return b;
}