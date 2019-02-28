#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n,i=1;
    printf("enter a number");
    scanf("%d",&n);
    while (i*i<=n)
    {
        if (i*i==n) 
        {
            printf("%d * %d ",i,i);
            getch();
            return 0;
        }
        i++;
    } 
    printf("false");
    getch();
    return 0;
}