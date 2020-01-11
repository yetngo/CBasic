//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <math.h>

int validDate(int d, int m, int y)
{
    int maxd = 31; /*max day of months 1, 3, 5, 7, 8, 10, 12 */ /* basic checking */
    if (d < 1 || d > 31 || m < 1 || m > 12)
        return 0; /* update maxd of a month */
    if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
        maxd = 30;
    else if (m == 2)
    {
        /* leap year? */
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            maxd = 29;
        else
            maxd = 28;
    }
    return d <= maxd;
}

int character_data(int c1, int c2)
{
    char t, c;
    if (c1 > c2)
    {
        t = c1;
        c1 = c2;
        c2 = t;
        for (c = c2; c >= c1; c--)
            printf("%c : %d, %o, %X\n", c, c, c, c);
    }
    else
        for (c = c1; c <= c2; c++)
            printf("%c : %d, %o, %X\n", c, c, c, c);
}

int main()
{
    int choice, n;
    do
    {
        printf("\n1-Processing date data\n");
        printf("2-Character data\n");
        printf("3-Select an operation:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int d, m, y;
            printf("d=");
            scanf("%d", &d);
            printf("m=");
            scanf("%d", &m);
            printf("y=");
            scanf("%d", &y);
            if (validDate(d, m, y))
                printf("valid date");
            else
                printf("invalid date");
        }
        break;
        case 2:
        {
            char c1, c2, t, c;
            printf("character 1: ");
            scanf(" %c", &c1);
            printf("character 2: ");
            scanf(" %c", &c2);
            character_data(c1, c2);
        }
        }
        break;
    } while ((choice > 0) && (choice < 3));
    getch();
    return 0;
}