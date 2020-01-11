//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>

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

double fibo(int n)
{
    int t1 = 1, t2 = 1, f = 1, i;
    printf("%d,%d", t1, t2);
    for (i = 3; i <= n; i++)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
        printf(",%d", f);
    }
    return f;
}

int main()
{
    int choice, n;
    do
    {
        printf("\n1-Print the first n Fibonacci numbers\n");
        printf("2-Print this data is valid or not\n");
        printf("3-Select an operation:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            do
            {
                printf("n=");
                scanf("%d", &n);
            } while (n < 0);
            fibo(n);
            break;
        case 2:
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
        }
    } while ((choice > 0) && (choice < 3));
    getch();
    return 0;
}