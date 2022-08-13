#include <stdio.h>

int main()
{
    // char ptr[] = "Uday Bhai";
    // ptr = "Akula bhai"; // it will throw error: assignment to expression with array type(we cant assign)

    char *ptr = "Uday Bhai";
    ptr = "Akula bhai"; // it works because it assigned to pointer

    printf("%s", ptr);
    return 0;
}
