//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>

double factorial(int n)
{
    double p = 1;
    int i;
    for (i = 2; i <= n; i++)
        p *= i;
    return p;
}
int main()
{
    int n;
    do
    {
        printf("n=");
        scanf("%d", &n);
    } while (n < 0);
    printf("%.2lf", factorial(n));
    getch();
    return 0;
}