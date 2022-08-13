#include <stdio.h>
#include <string.h>
int main()
{
    char st1[30];
    char st2[30];
    char c;
    int i = 0;
    printf("Enter the first string\n");
    scanf("%s", st1);
    printf("Enter the second string character by character\n");
    while (c != '\n')
    {
        fflush(stdin); // it removes unnessary enters
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i - 1] = '\0'; // why i-1 because in the st2 will get extra space for avoid this we are adding null pointer
    printf("The string 1 is %s\n", st1);
    printf("The string 2 is %s\n", st2);
    printf("strcmp of these two strings is %d", strcmp(st1, st2));

    return 0;
}