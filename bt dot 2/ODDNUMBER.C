#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i%2==1) printf("%d\n",i);// tìm số lẻ (chia hết cho 2) và in ra số đó
    }
    getch();
    return 0;
}