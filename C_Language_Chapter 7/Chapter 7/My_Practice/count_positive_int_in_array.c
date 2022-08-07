#include <stdio.h>
int countPositives(int mainArr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mainArr[i] >= 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 3, -4, 5, 6, 7, -8};
    printf("The count for positive integres in the given array is %d", countPositives(arr, 8));
    return 0;
}