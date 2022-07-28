#include <stdio.h>
// in call by reference will pass the address of the variables as arguments while calling the function
void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main()
{
    int x = 3;
    int y = 4;
    printf("The values of x and y before calling the function is %d and %d is\n", x, y);
    // wrong_swap(x, y); // will not work due to call by value
    swap(&x, &y); // will work due to call by refernce
    printf("The values of x and y after calling the function is %d and %d is\n", x, y);

    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
