//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>

int gcd(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    int d;
    int m;
    do
    {
        printf("a=");
        scanf("%d", &a);
        printf("b=");
        scanf("%d", &b);
    } while (a <= 0 || b <= 0);
    d = gcd(a, b);
    m = lcm(a, b);
    printf("gcd=%d\n", d);
    printf("lcm=%d", m);
    getch();
    return 0;
}