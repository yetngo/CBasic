#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, n, j = 1, sum = 0, x = 1, num = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        while (j <= i)
        {
            num = num + 3 * x;
            x = x * 10;
            j++;
        } /* tạo số:
         vd:i=1 thì num = 3
         i=2 thì num=33 ...*/
        sum = sum + num;
    }
    printf("sum= %d\n", sum);
    getch();
    return 0;
}