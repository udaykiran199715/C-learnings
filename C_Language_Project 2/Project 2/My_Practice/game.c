#include <stdio.h>
#include <stdlib.h> // for using rand() and srand()
#include <time.h>   // for using time()

int snakeWaterGame(char you, char comp)
{
    // draw case
    // ss, ww, gg
    if (you == comp)
    {
        return 0;
    }

    // Not draw case
    // sw, ws, sg, gs, wg, gw

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number <= 33)
    {
        comp = 's';
    }
    else if (number > 33 && number <= 66)
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }
    printf("Enter 'g' for gun, 's' for snake and 'w' for water --> ");
    scanf("%c", &you);
    int result = snakeWaterGame(you, comp);
    if (result == 0)
    {
        printf("Match Draw!\n");
    }
    else if (result == 1)
    {
        printf("Congratulations. You win!\n");
    }
    else
    {
        printf("Sorry. You lose!\n");
    }
    printf("You choose %c, computer choose %c", you, comp);
    return 0;
}