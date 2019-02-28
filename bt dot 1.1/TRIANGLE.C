#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,x;
    printf("nhap do dai 3 canh ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b)>c && (a+c)>b && (b+c)>a) 
    {
        x=(a+b+c)/2;
        printf("chu vi = %d\n",x*2);
        printf("dien tich = %10.2f",(float)(sqrt(x*(x-a)*(x-b)*(x-c))));
    }
    else printf("day ko phai la tam giac");
    getch();
    return 0;
}