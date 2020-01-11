#include <stdio.h>
#include <conio.h>
#include <math.h>
int removepos(int pos, int a[100], int *n)
{
    int i;
    for (i = pos; i <= *n; i++)
        a[i] = a[i + 1];
    (*n)--;
}
int main()
{
    int i, n = 0;
    int a[100];
    printf("Please enter the number:\n");
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &a[n]);
        if (a[n] == -999)
            break;
        if (a[n] > 0 && a[n] <= 100)
            n++;
    }
    n--;
    double max = a[1];
    double min = a[1];
    double sum;
    int count = 0;
    for (i = 0; i <= n; i++)
    {

        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    for (i = 0; i <= n; i++)
    {
        if (a[i] == max)
            removepos(i, a, &n);
        if (a[i] == min)
            removepos(i, a, &n);
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
        sum += a[i];
        count++;
    }
    double ave = (double)sum / count;
    double ssum = 0;
    for (i = 0; i <= n; i++)
    {
        if (a[i] > ave)
            ssum += ((a[i] - ave) * (a[i] - ave));
        else
            ssum += ((ave - a[i]) * (ave - a[i]));
    }

    printf("\nThe data has been adjusted by removing the minimum %.2lf", min);
    printf("\nThe data has been adjusted by removing the maximum %.2lf", max);
    printf("\nThe adjusted mean is %.2lf", ave);
    printf("\nThe adjusted standard deviation is %.2lf", sqrt((double)ssum / (n + 1)));
    printf("\nHere is a histogram of the adjusted data:\n");
    int j;
    for (j = 0; j <= 100; j += 5)
    {
        if (j < 100)
            printf("%d-%d|", j, j + 4);
        else
            printf("  %d|", j);
        for (i = 0; i <= n; i++)
            if (a[i] >= j && a[i] <= (j + 4))
                printf("*");
        printf("\n");
    }
    getch();
    return 0;
}