#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age = -50) // age = 50
    {              // any non zero value is true so it comes in to the if condition
        printf("Half century\n");
    }

    if (age == 50)
    {
        printf("Half century\n");
    }
    return 0;
}