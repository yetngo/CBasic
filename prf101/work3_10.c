//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>

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
    int n;
    do
    {
        printf("n=");
        scanf("%d", &n);
        printMinMaxDigits(n);
    } while (n < 0);
    getch();
    return 0;
}
