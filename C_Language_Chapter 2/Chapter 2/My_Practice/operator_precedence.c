#include <stdio.h>

int main()
{
    int x = 4;
    int y = 9;

    printf("The value of 3 * x - 8 * y is %d\n", 3 * x - 8 * y); // output The value of 3 * x - 8 * y is -60

    // In C BODMAS will not work
    // the below priority will applicable only in the absence of parenthesis(brakcets())
    // 1st priority ---> *, / %
    // 2nd priority ---> +, -
    // 3rd priority ---> =

    printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x); // output The value of 8*y / 3*x is 16
    // 8 * y / 3 * x it gives wrong answer because it not follow bodmas
    // when tie appears it follows left to right associtivity (*, /)
    // 8*3 -> 24/3*2
    // 24/3 -> 8*2
    // 8*2 -> 16

    return 0;
}