///Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <math.h>

int ISBNcheck(int n)
{
    int i;
    int isbn[10];
    int sum = 0, k = 10;
    for (i = 9; i >= 0; i--)
    {
        isbn[i] = n % 10;
        n = n / 10;
    }
    for (i = 0; i <= 8; i++)
    {
        sum += isbn[i] * k;
        k--;
    }
    return (sum + isbn[9]) % 11;
}
int main()
{
    int n;
    printf("ISBN[10]\n");
    do
    {
        printf("input ISBN: ");
        scanf("%d", &n);
    } while (n < 0);
    if (ISBNcheck(n) == 0)
        printf("valid");
    else
        printf("invalid");
    getch();
    return 0;
}