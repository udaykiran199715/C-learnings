#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i, *(ptr + i));
//     }
//}

// ----------------------------OR------------------------------------
void printArray(int ptr[], int n)
{
    printf("The address of arr is %u\n", &ptr);       // different address for both arr and ptr
    printf("The address of ptr[0] is %u\n", &ptr[0]); // same address for both arr[0] and ptr[0]
    for (int i = 0; i < n; i++)
    {
        // printf("The value of element %d is %d\n", i, *(ptr + i));
        //  -------------OR-----------------
        printf("The value of element %d is %d\n", i, ptr[i]);
    }
    ptr[2] = 654; // This value will change in the main Array(arr[]) as well bcoz the value is stored in the address
}

int main()
{
    int arr[] = {1, 2, 45, 67, 89, 56};
    printf("The address of arr is %u\n", &arr);       // different address for both arr and ptr
    printf("The address of arr[0] is %u\n", &arr[0]); // same address for both arr[0] and ptr[0]
    printArray(arr, 6);
    // printArray(arr, 7); // the length of the array is 6 but i passed 7 in this case it will not throw any error but for the 6 index it prints garbage value or random value for this index
    printf("The value of arr[2] is %d", arr[2]);
    return 0;
}