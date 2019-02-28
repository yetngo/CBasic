#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=10;i++) printf("%d * %d = %d\n",n,i,n*i);
    getch();
    return 0;
}