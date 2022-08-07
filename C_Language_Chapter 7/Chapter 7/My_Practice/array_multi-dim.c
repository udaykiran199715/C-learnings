#include <stdio.h>

void printMarks(int getMarks[0][0], int stu, int sub)
{
    for (int i = 0; i < stu; i++)
    {
        // for (int j = 0; j < sub; j++)
        // {
        //     printf("\nThe Marks for student %d of subject %d is: %d ", i + 1, j + 1, getMarks[i][j]);
        // }
        printf("The marks for student %d is %p \n", i + 1, getMarks[i]);
    }
}

int main()
{
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    int num_subjects;
    printf("\nEnter the number of subjects: ");
    scanf("%d", &num_subjects);

    int marks[num_students][num_subjects];

    // Taking the value from user
    for (int i = 0; i < num_students; i++)
    {
        for (int j = 0; j < num_subjects; j++)
        {
            printf("\nEnter the marks for student %d of subject %d is: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    // Printing the marks
    for (int i = 0; i < num_students; i++)
    {
        for (int j = 0; j < num_subjects; j++)
        {
            printf("\nThe Marks for student %d of subject %d is: %d ", i + 1, j + 1, marks[i][j]);
        }
        // printf("\n%p", marks[i]);
    }
    // printMarks(marks, num_students, num_subjects);

    return 0;
}