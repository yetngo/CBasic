#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int sum = 0, n;
    do
    {
        printf("nhap n: ");
        scanf("%d", &n);
        sum = sum + n;
    } while (n != 0);
    printf("sum= %d", sum);
    getch();
    return 0;
}