#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, n, d;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("nhap d: ");
    scanf("%d", &d);
    for (i = 1; i <= n; i++)
        if (i % d == 0) // tìm số chia hết được cho d
            printf("%d ", i);
    getch();
    return 0;
}