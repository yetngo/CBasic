#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i,n,m,Ouput=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a power: ");
    scanf("%d",&m);
    for (i=1;i<=m;i++) Ouput=Ouput*n;
        printf("Ouput= %d\n",Ouput);
    getch();
    return 0;
}