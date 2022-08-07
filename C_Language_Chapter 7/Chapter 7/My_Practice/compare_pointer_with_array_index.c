#include <stdio.h>

int main()
{
    int arr[10];
    // int *ptr = &ptr[0];
    //  ------------or-------------
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These point to the same location/address in memory\n");
    }
    else
    {
        printf("These are not point to the same location/address in memory\n");
    }

    return 0;
}