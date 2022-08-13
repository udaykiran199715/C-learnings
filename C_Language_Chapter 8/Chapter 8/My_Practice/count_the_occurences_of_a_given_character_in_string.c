#include <stdio.h>
#include <string.h>
int occurences(char mainStr[], char mainC)
{
    int i = 0;
    int count = 0;
    while (i <= (strlen(mainStr) - 1))
    {
        if (mainStr[i] == mainC)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[20] = "uday kiran akula";
    char c = 'a';

    printf("Number of occcurences is %d", occurences(str, c));
    return 0;
}