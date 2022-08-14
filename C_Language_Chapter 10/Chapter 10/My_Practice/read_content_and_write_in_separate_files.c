// #include <stdio.h>

// int main()
// {
//     char str[100];
//     char *strPtr = str;
//     int i, j = 0;
//     FILE *ptr;
//     ptr = fopen("getc_demo.txt", "r");

//     char c = getc(ptr);

//     while (c != EOF)
//     {
//         printf("%c", c);
//         str[i] = c;
//         i++;
//         c = getc(ptr);
//     }
//     fclose(ptr);

//     // while (str[j] != "\0")
//     // {
//     //     printf("%c is \n", str[j]);
//     //     j++;
//     // }
//     printf("%s is", str);

//     return 0;
// }

#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;

    ptr2 = fopen("write_content_2_times.txt", "w");

    for (int i = 0; i < 2; i++)
    {
        ptr1 = fopen("getc_demo.txt", "r");
        char c = fgetc(ptr1);
        while (c != EOF)
        {
            fputc(c, ptr2);
            c = fgetc(ptr1);
        }
        fputc('\n', ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}