//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>

double fibo(int n)
{
    int t1 = 1, t2 = 1, f = 1, i;
    for (i = 3; i <= n; i++)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
int main()
{
    int n;
    do
    {
        printf("n=");
        scanf("%d", &n);
    } while (n < 1);
    printf("%lf", fibo(n));
    getch();
    return 0;
}