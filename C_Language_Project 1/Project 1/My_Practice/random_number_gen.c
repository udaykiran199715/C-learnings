#include <stdio.h>
#include <stdlib.h> // for using rand() and srand()
#include <time.h>   // for using time()

int main()
{
    int number;
    // number = rand(); // it is generating same number every time --> 41

    // to avoid the above issue if we use the below it will generate different number every time
    srand(time(0));
    // number = rand();

    number = rand() % 100 + 1; // it will generate the random number between 1 and 100

    printf("The number is %d", number);
    return 0;
}