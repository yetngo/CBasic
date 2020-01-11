#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int check(int n)
{
    int sq = sqrt(n);
    float sqr = sqrt(n);
    if (sq == sqr)
        printf("%d is a square number %d=%d*%d\n", n, n, sq, sq);
    else
        printf("%d is not a square number\n", n);
}
int main()
{
    int key, n;
    do
    {
        printf("Check Square Number Program\n");
        do
        {
            printf("Enter a positive natural integer n = ");
            scanf("%d", &n);
            if (n <= 0)
                printf("Please enter a positive natural integer!\n\n");
        } while (n <= 0);
        check(n);
        printf("Press any key to continue, press ESC to quit...\n\n\n");
        key = getch();
    } while (key != 27);
    getch();
    return 0;
}