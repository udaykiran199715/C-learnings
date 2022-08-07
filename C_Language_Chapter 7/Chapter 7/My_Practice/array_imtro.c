#include <stdio.h>

int main()
{
    int marks[4];
    marks[0] = 4;
    marks[1] = 5;
    marks[2] = 6;
    marks[3] = 7;
    marks[4] = 8; // we intialized the array only for four elements but added the element for 5th index but its working in this compiler in some other compilers there is a chance to throw error
    printf("Marks[4] is %d", marks[4]);
    return 0;
}