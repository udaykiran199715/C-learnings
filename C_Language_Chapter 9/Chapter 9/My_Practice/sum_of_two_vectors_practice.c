#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector mainV1, struct vector mainV2)
{
    struct vector result;
    result.x = mainV1.x + mainV2.x;
    result.y = mainV1.y + mainV2.y;
    return result;
}
int main()
{
    struct vector v1, v2, finalSum;
    v1.x = 12;
    v1.y = 13;
    printf("The V1 of X dim is %d and y dim is %d\n", v1.x, v1.y);

    v2.x = 15;
    v2.y = 16;
    printf("The V2 of X dim is %d and y dim is %d\n", v2.x, v2.y);

    finalSum = sumVector(v1, v2);
    printf("The Final sum of X dim is %d and y dim is %d\n", finalSum.x, finalSum.y);

    return 0;
}