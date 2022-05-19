#include <stdio.h>

int main()
{
    // 1.
    // int a ; b=a; // Invalid after a (,) should be there
    int a;
    int b = a;     // valid
    int v = 3 ^ 3; // It is valid but it wont print 9
    // char dt = '12 dec 2020'; // Invalid because only one character should be there
    char da = '2'; // valud
    // 3.0/8 is data type of double* or float

    // write a program to determine whether the number is divisible by 97 or not
    int num;
    printf("Entet the number \n");
    scanf("%d", &num);
    printf("Divisible test returns: %d\n", num % 97);

    // calculate the value of 3 * x / y - z + k
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 3 *2 ->6 /3-3+1
    // 6/3 ->2 -3+1
    // 2-3 ->-1 +1
    // -1+1 -> 0
    printf("The result is %d\n", result);

    return 0;
}