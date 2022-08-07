#include <stdio.h>

int main()
{
    int n;
    printf("Enter the required table number: ");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", n, i + 1, arr[i]);
    }
    return 0;
}