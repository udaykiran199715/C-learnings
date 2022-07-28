#include <stdio.h>

int main()
{
    int i = 10;
    char c = 'a';
    int *j;
    j = &i;
    // j = 3860854404; // it will throw error
    // int d = &c; // it will throw error
    printf("Address of i is %u\n", &i);
    printf("Address of c is %u\n", &c);
    printf("value of the address %u is %d\n", &i, *(&i));
    printf("The value of j is %u\n\n", *j);
    // printf("The value of d is %d", d);

    int k = 34;
    int *l = &k;
    printf("The value of k is %d\n", k);
    printf("Address of k is %u\n", &k);
    printf("The value of the k is %d\n", *l);
    printf("The address of k is %u\n", l);
    printf("The address of l is %u\n", &l);
    printf("The value of l is %d\n\n", *(&l));

    char m = 'd';
    char *n = &m;
    printf("The address of m is %u\n", n);
    printf("The value of m is %c\n", *n);
    // printf("The value of m is %u\n", *n); // getting integer value ---> wrong
    // int **j int ***j we can use number of **** based on pointers

    return 0;
}