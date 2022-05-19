#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    //  a,b e.tc.. are operands, +, - * , / are operators

    int z;
    z = b * a; // legal
               //   b * a = z; // Illegal (Not allowed throws error)
    printf("The value of z is %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);  // output: 5 when divided by 2 leaves a remainder of 1
    printf("5 when divided by 2 leaves a remainder of %d\n", -5 % 2); // output: 5 when divided by 2 leaves a remainder of -1
    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % -2); // output: 5 when divided by 2 leaves a remainder of 1 (It takes the sign of denominator)

    // No operator is assumed to be present
    // printf("The value of 4 * 5 is  %d\n", (4) * (5));  // will not return 20 it is wrong there is no operator
    printf("The value of 4 * 5 is  %d\n", (4) * (5)); // output: The value of 4 * 5 is 20

    // There is no operator to perform exponentiation in c
    printf("The value of 4 ^ 5 is  %d\n", 4 ^ 5); // output: The value of 4 ^ 5 is  1 (^ it is bitwise operator it will not produce 4 to the power of 5 and also it will not throw any error)

    // To use pow function we have to include math.h library because the function is available in math.h library
    printf("The value of 4 to the power of 5 is %f\n", pow(4, 5)); // output: The value of 4 to the power of 5 is 1024.000000
    printf("The value of 4 to the power of 5 is %d\n", pow(4, 5)); // output: The value of 4 to the power of 5 is 0 (because the pow returns the double value so we have to use the realvalue one i.e., %f dont use %d)

    // Int and Int ----> Int
    // Int and Float ---> float
    // float and float ---> float

    printf("The value of 6 + 5 is %d\n", 6 + 5);         // output: The value of 6 + 5 is 11
    printf("The value of 6 + 5.5 is %d\n", 6 + 5.5);     // output: The value of 6 + 5.5 is 0 (it gives wrong value because the value is float but we used %d)
    printf("The value of 6.2 + 5.2 is %d\n", 6.2 + 5.2); // output: The value of 6.2 + 5.2 is -858993459 (it gives random number because the value is float but we used %d)

    printf("The value of 6 + 5.5 is %f\n", 6 + 5.5);     // output: The value of 6 + 5.5 is 11.500000
    printf("The value of 6.2 + 5.2 is %f\n", 6.2 + 5.2); // output: The value of 6.2 + 5.2 is 11.400000

    printf("The value of 5/2 is %d\n", 5 / 2);     // output: The value of 5/2 is 2
    printf("The value of 3.0/9 is %f\n", 3.0 / 9); // output: The value of 3.0/9 is 0.333333
    return 0;
}