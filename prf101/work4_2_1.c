//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <math.h>

int prime(int n)
{
    int m = sqrt(n); /* m: square root of n */
    int i;           /* variable having value from 2 to m  */
    if (n < 2)
        return 0;            /* Condition 1 is not satisfied */
    for (i = 2; i <= m; i++) /* checking the second condition */
        if (n % i == 0)
            return 0; /* n is divided by i  n is not a prime */
    return 1;         /* n is a prime */
}

void printMinMaxDigits(int n)
{
    int digit;         /* Variable for extracting 1 digit */
    int min, max;      /* Result variables */
    digit = n % 10;    /* get the first rightmost digit: 3 */
    n = n / 10;        /* 1029, the remainder needs to proceed after*/
    min = max = digit; /* initialize results */
    while (n > 0)
    {
        digit = n % 10; /* Get the next digit */
        n = n / 10;
        if (min > digit)
            min = digit; /* update results */
        if (max < digit)
            max = digit;
    }
    printf("min=%d and max=%d", min, max);
}

int main()
{
    int choice, n;
    do
    {
        printf("\n1-Process prime\n");
        printf("2-Print min, max digit in an integer\n");
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
            if (prime(n) == 1)
                printf("It is a prime\n");
            else
                printf("It is not aprime\n");
            break;
        case 2:
            do
            {
                printf("n=");
                scanf("%d", &n);
            } while (n < 0);
            printMinMaxDigits(n);
            break;
        }
    } while ((choice > 0) && (choice < 3));
    getch();
    return 0;
}