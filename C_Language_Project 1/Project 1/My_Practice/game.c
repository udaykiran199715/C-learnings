#include <stdio.h>
#include <stdlib.h> // for using rand() and srand()
#include <time.h>   // for using time()

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // it will generate the random number between 1 and 100

    // printf("The number is %d\n", number);
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher number please\n");
        }
        else if (guess > number)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("You guessed in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}