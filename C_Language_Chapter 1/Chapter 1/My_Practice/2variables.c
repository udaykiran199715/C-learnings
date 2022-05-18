#include <stdio.h>

int main()
{
    int a = 4;
    // int b = 8.5; // not recommended because 8.5 is not an integer
    float b = 8.5;
    char c = 'u'; // dont use ""(dobule quotes it throws error) use only ''
    int d = 45;
    int e = 45 + 5;
    // %d for integers
    // %f for real values
    // %c for characters

    // printf("The value of a is a");
    // printf("The value of a is %d", a); // output is ---> The value of a is 4
    // printf("The value of a is %d %d", a, a); // output is ---> The value of a is 4 4
    // printf("The value of a is %d", a, a); // output is ---> The value of a is 4
    // printf("The value of a is %d fasfdsdf %d", a, a); // output is ----> The value of 4 is %d fasfdsdf 4
    // printf("The value of a is %d fasfdsdf %d", a); // output is ----> The value of a is 4 fasfdsdf 1347101552 (we are getting random number is second %d)
    // printf("The value of b is %f", b); // output is ---> The value of b is 8.5
    // printf("The value of c is %c", c); // output is ---> The value of c is u

    // both will come in same line
    // printf("The value of a is %d", a);
    // printf("The value of b is %f", b);

    // all will come in different lines when we use \n
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a + d);        // output is ---> Sum of a and d is 49
    printf("Sum of a and e is %d \n", a + e);        // output is ---> Sum of a and e is 54
    printf("Difference of a and d is %d \n", a - d); // output is ---> Difference of a and d is -41
    printf("Difference of d and a is %d \n", d - a); // output is ---> Difference of d and a is 41
    return 0;
}