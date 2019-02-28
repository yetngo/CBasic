#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i=1,n;
    printf("nhap n: ");
    scanf("%d",&n);
    while (i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    getch();
    return 0;
}