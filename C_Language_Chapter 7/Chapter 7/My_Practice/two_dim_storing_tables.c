#include <stdio.h>

void createTableValues(int mainTable[1][10], int numOfTables, int tableList[])
{
    for (int i = 0; i < numOfTables; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mainTable[i][j] = tableList[i] * (j + 1);
        };
    };
}

int main()
{
    int num_of_tables;
    printf("Enter the number of tables: \n");
    scanf("%d", &num_of_tables);

    int required_tables[num_of_tables];
    for (int i = 0; i < num_of_tables; i++)
    {
        printf("Enter the table number of required table: \n");
        scanf("%d", &required_tables[i]);
    };

    int finalTables[num_of_tables][10];

    createTableValues(finalTables, num_of_tables, required_tables);
    for (int i = 0; i < num_of_tables; i++)
    {
        printf("************************ The %dth table is **************************\n", required_tables[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n", required_tables[i], j + 1, finalTables[i][j]);
        };
    };

    return 0;
}