#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n, i, j;
    int m1[10][10], m2[10][10], sum[10][10];
    printf("Matrix Add\nAccept size: ");
    scanf("%d %d", &m, &n);
    printf("Accept matrix m1:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m1[i][j]);
    printf("Accept matrix m2:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m2[i][j]);
    printf("m = m1 + m2:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", m1[i][j] + m2[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}