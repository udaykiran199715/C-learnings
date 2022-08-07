#include <stdio.h>
void reverseArray(int getArr[], int n)
{
    int tempArr[n];
    for (int i = 0; i < n; i++)
    {
        int newInd = n - (i + 1);
        // printf("New Ind is %d\n", newInd);
        tempArr[i] = getArr[newInd];
    }
    for (int i = 0; i < n; i++)
    {
        getArr[i] = tempArr[i];
    }
}

void reverseArray2Appraoch(int getArr[], int n)
{
    int temp;
    // n/2 --> 5/2 = 2, 7/2 = 3
    for (int i = 0; i < (n / 2); i++)
    {
        temp = getArr[i];
        getArr[i] = getArr[n - (i + 1)];
        getArr[n - (i + 1)] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("Before Reverse\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The value of the element at index %d is %d \n", i, arr[i]);
    }
    // reverseArray(arr, 5);
    reverseArray2Appraoch(arr, 5);
    printf("After Reverse\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The value of the element at index %d is %d \n", i, arr[i]);
    }
    return 0;
}