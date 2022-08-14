#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); // r is for reading the file
    ptr = fopen("sample.txt", "w"); // w is for writing the file

    // r is open for reading
    // rb is open foe reading in binary
    // w is open for writing
    // wb is open for writiing in binary
    // a is open for append

    return 0;
}