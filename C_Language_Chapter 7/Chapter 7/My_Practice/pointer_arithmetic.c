#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr / address of i is %u\n", ptr);
    printf("The value of i is %d\n", *ptr);
    // for integer or float it is incremented/decremented by 4
    // ptr++; //  added +1, so the address is incremented by 4
    // ptr = ptr + 1;                              //added +1, so the address is incremented by 4
    ptr = ptr - 2; // subtracted -1, so the address is decremented by 4
    // ptr = ptr - 1;                           //subtracted -1, so the address is decremented by 4
    // ptr = ptr + 2;                           // added +2, so the address is incremented by 8
    // ptr = ptr - 2;                           // subrtracted -2, so the address is decremented by 8
    // ptr = ptr + 5; // added +5, so the address is incremented by 20
    // so evertime the address is incremented by new value = current value +/- ((number of bytes for integer (n ==> 4)) * increment/decrement value)
    printf("The value of ptr is %u\n", ptr);
    // ******* even if we increment 1 the address we are getting as incremented by 4 because in my architecture/ computer for the integer it is allocating 4 bytes thats why the address is incremented by 4 even for the decrement also the address is decremented by 4
    printf("The value of i is %d\n", *ptr);

    char c = 'a'; // 'asdfasdf' ----> the program will run and will print the last letter f but it throws error/ warning in output
    // char c = 34; -----> it will not throw any error or warning and it wil print empty
    char *ptrC = &c;
    printf("The c is %c\n", c);
    printf("The value of ptrC / address of c is %u\n", ptrC);
    // for character it is incremented/decremented by 1
    ptrC++; //  //added +1, so the address is incremented by 1
    // for character the number of bytes is 1 so it will increment only 1
    printf("The value of ptrC is %u\n", ptrC);

    float f = 2.55;
    float *ptrF = &f;
    printf("The value of ptrF / address of f is %u\n", ptrF);
    // for integer or float it is incremented/decremented by 4
    ptrF++;
    printf("The value of ptrF is %u\n", ptrF);

    return 0;
}