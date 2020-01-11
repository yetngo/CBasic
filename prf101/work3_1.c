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
int main()
{
    int n, i;
    do
    {
        printf("n=");
        scanf("%d", &n);
    } while (n < 2);
    for (i = 2; i <= n; i++)
        if (prime(i) == 1)
            printf("%d ", i);
    getch();
    return 0;
}
