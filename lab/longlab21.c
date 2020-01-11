#include <stdio.h>
#include <conio.h>
#include <string.h>
int check(char date[11])
{
    int i;
    for (i = 0; i < strlen(date); i++)
        if (date[i] >= '0' && date[i] <= '9' || date[i] == '/')
            return 1;
        else
            return 0;
}
int validDate(int d, int m, int y)
{
    int maxd = 31;
    if (d < 1 || d > 31 || m < 1 || m > 12)
        return 0;
    if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
        maxd = 30;
    else if (m == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            maxd = 29;
        else
            maxd = 28;
    }
    return d <= maxd;
}
int dayOfYear(int d, int m)
{
    int i = 0, daymon = 0;
    int mth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (i = 0; i < m; i++)
        daymon += mth[i];
    return (daymon + d);
}
int dayOfWeek(int d, int m, int y)
{
    int t[12] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= (m < 3) ? 1 : 0;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}
int printDayOfWeek(int d, int m, int y)
{
    int op = dayOfWeek(d, m, y);
    switch (op)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    }
}
int weekOfYear(int d, int m)
{
    int day = dayOfYear(d, m);
    return day / 7 + 1;
}
int main()
{
    char date[11];
    int d, m, y;
    int i;
    do
    {
        printf("Please enter a date(dd/mm/yyyy): ");
        fflush(stdin);
        gets(date);
    } while (check(date) == 0);
    char *token;
    char word[100][100];
    int x = 0;
    token = strtok(date, "/");
    while (token != NULL)
    {
        strcpy(word[x], token);
        x++;
        token = strtok(NULL, "/");
    }
    d = atoi(word[0]);
    m = atoi(word[1]);
    y = atoi(word[2]);
    if (validDate(d, m, y))
    {
        printf("\nDay of year: %d", dayOfYear(d, m));
        printf("\nDay of week: ");
        printDayOfWeek(d, m, y);
        printf("\nWeek of year: %d", weekOfYear(d, m));
    }
    else
        printf("invalid date");

    getch();
    return 0;
}