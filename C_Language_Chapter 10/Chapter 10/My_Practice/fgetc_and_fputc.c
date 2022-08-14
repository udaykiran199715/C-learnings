#include <stdio.h>

int main()
{
    FILE *getCptr;
    // fgetc demo for reading a file
    getCptr = fopen("getc_demo.txt", "r");

    // The below ones will print the same character(first character) every time
    // char c = fgetc(getCptr);
    // printf("The value of my character is %c\n", c);
    // printf("The value of my character is %c\n", c);
    // printf("The value of my character is %c\n", c);

    // The below ones will print all the characters in the text like character by character
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    printf("The value of my character is %c\n", fgetc(getCptr));
    fclose(getCptr);

    FILE *putCptr;
    putCptr = fopen("putc_demo.txt", "w");
    putc('U', putCptr);
    putc('d', putCptr);
    putc('a', putCptr);
    putc('y', putCptr);
    fclose(putCptr);

    return 0;
}