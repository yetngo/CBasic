#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i,n,Result=1;
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) Result=Result*i;
        printf("Result= %d",Result);
    getch();
    return 0;
}