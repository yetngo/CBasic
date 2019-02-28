#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int sum = 0, n,m;
    printf("nhap n: ");
        scanf("%d", &n);
    while (n>0)
    {
        m=n%10;// m là chữ số cuối cùng của n
        sum = sum + m;
        n=n/10;// bỏ chữ số cuối cùng của n
    } 
    printf("sum= %d", sum);
    getch();
    return 0;
}