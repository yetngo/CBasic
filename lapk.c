#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i=1;
    do
    {
        printf("nhap n ");
        scanf("%d",&n);
        if ((n<11)||(n>99))
        {printf("\nSai! Nhap lai: ");
        i=i+1;
        printf("nhap sai %d lan\n", i);}
    }
    while ((n<=10)||(n>=100));
    getchar();
    return 0;
}
