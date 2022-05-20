#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    printf("Enter Physics marks\n");
    scanf("%d", &physics);
    printf("Enter Chemistry marks\n");
    scanf("%d", &chemistry);
    printf("Enter Maths marks\n");
    scanf("%d", &maths);
    float total = (physics + chemistry + maths) / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your total percentage is %f and you are failed\n", (int)total); // if you want output of total in int then we have to write (int) total
    }
    else
    {
        printf("Your total percentage is %f and you are passed \n", total);
    }
    return 0;
}