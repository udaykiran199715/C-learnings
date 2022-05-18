#include <stdio.h>

int main()
{
    // with hardcoded values
    // int length = 5, breadth = 6;
    // int area = length * breadth;
    // printf("Area of rectangle is %d", area);

    // By taking inputs from users
    int length, breadth;
    printf("Please enter the length of the rectangle: \n");
    scanf("%d", &length);
    printf("Please enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);
    printf("Area of rectangle is %d", length * breadth);

    return 0;
}