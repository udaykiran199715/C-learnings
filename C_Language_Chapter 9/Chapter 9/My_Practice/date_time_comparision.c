#include <stdio.h>

typedef struct dateStructure
{

    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;

} dateFormat;

void display(dateFormat d)
{
    printf("day of the date is %d\n", d.day);
    printf("month of the date is %d\n", d.month);
    printf("year of the date is %d\n", d.year);
    printf("hour of the date is %d\n", d.hour);
    printf("minute of the date is %d\n", d.minute);
    printf("second of the date is %d\n", d.second);

    printf("The whole date is %d-%d-%d %d:%d:%d\n", d.year, d.month, d.day, d.hour, d.minute, d.second);
}
int dateComp(dateFormat d1, dateFormat d2)
{
    // comparing by year
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    // comparing by month
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    // comparing by date
    if (d1.day > d2.day)
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }

    // comparing by hour
    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }

    // comparing by minute
    if (d1.minute > d2.minute)
    {
        return 1;
    }
    if (d1.minute < d2.minute)
    {
        return -1;
    }

    // comparing by second
    if (d1.second > d2.second)
    {
        return 1;
    }
    if (d1.second < d2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    dateFormat d1 = {14, 8, 2021, 1, 5, 13};
    dateFormat d2 = {14, 8, 2021, 1, 5, 13};
    display(d1);
    display(d2);
    printf("The value returned by the dateComp is %d\n", dateComp(d1, d2));
    return 0;
}