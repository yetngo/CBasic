#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        printf("This is the sentence: %d\n",i);
    getch();
    return 0;
}