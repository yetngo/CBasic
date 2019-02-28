#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, n, q;
    /* i => hàng
    q => hình * */
    printf("nhap n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (q = 1; q <= i; q++)
                printf("*");
            printf("\n");
        }
    }
    getch();
    return 0;
}