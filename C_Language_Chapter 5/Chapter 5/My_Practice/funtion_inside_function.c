#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodEvening();

int main()
{
    goodMorning();
    return 0;
}

void goodMorning()
{
    printf("Good Morning Uday\n");
    goodAfternoon();
}

void goodAfternoon()
{
    printf("Good Afternoon Uday\n");
    goodEvening();
}

void goodEvening()
{
    printf("Good Evening Uday\n");
}
