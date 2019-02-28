#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, n, q, j;
    /* i => hàng
    q => hình *
    j => khoảng trắng*/
    printf("nhap n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        //cái đầu tiên
        for (i = n; i >= 1; i--)
        {
            for (q = 1; q <= i; q++)
                printf("*");
            printf("\n");
        }
        printf("\n\n");
        // cái thứ 2
        for (i = 1; i <= n; i++)
        {
            for (j = (n - i); j >= 1; j--)
                printf(" ");
            for (q = 1; q <= i; q++)
                printf("*");
            printf("\n");
        }
        printf("\n\n");
        // cái thứ 3
        for (i = 1; i <= n; i++)
        {
            for (j = (n - i); j >= 1; j--)
                printf(" ");
            for (q = 1; q <= i; q++)
                printf("* ");
            printf("\n");
        }
        printf("\n\n");
        // cái thứ 4
        for (i = n; i >= 1; i--)
        {
            for (j = 1;j <= (n - i); j++)
                printf(" ");
            for (q = 1; q <= i; q++)
                printf("* ");
            printf("\n");
        }
    }
    getch();
    return 0;
}