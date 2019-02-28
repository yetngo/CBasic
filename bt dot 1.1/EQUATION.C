#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n;
    float a,b,c;
    printf("day la phuong trinh bac ");
    scanf("%d",&n);
    if (n==1)
    {
        printf("pt co dang ax+b=0\n");
        printf("nhap a, b");
        scanf("%f %f",&a,&b);
        printf("x=%10.2f",(float)(-b/a));
    }
    else
    if (n==2)
    {
        float x;
        printf("pt co dang ax^2+bx+c=0 (a khac 0)\n");
        printf("nhap a, b, c");
        scanf("%f %f %f",&a,&b,&c);
        x=b*b-4*a*c;
        if (x<0) printf("pt vo nghiem\n");
        else if (x==0) printf("pt co nghiem kep x1=x2=%10.2f\n",(float)(-b/(2*a)));
        else printf("pt co 2 nghiem x1=%10.2f ; x2=%10.2f",(float)((-b+sqrt(x))/(2*a)),(float)((-b-sqrt(x))/(2*a)));
    }
    else printf("tu giai di");
    getch();
    return 0;
}