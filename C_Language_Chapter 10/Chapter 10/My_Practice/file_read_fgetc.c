#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getc_demo.txt", "r");
    char c = fgetc(ptr);
    while (c != EOF) // EOF --> End of File
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}