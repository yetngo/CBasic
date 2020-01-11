//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
int T(int *p, int *q)
{
    int t = (*p) + (*q) > 12 ? 5 : 6;
    return 2 * t % 5;
}
int main()
{
    int a = 3, b = 4, c;
    c = T(&a, &b);
    printf("c=%d", c);
    getch();
    return 0;
}