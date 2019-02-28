#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n, i, j;
    printf("nhap n ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (i = n-1; i > 0; i--)
        printf("a[%d]=%d ", i, a[i]);
    getch();
    return 0;
}