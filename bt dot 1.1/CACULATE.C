#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    char x;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("x=");
    scanf(" %c",&x);
    if (x=='+') printf("%d %c %d = %d",a,x,b,a+b);
    else
    if (x=='-') printf("%d %c %d = %d",a,x,b,a-b);
    else
    if (x=='*' || x=='x') printf("%d %c %d = %d",a,x,b,a*b);
    else
    if (x=='/' || x==':') printf("%d %c %d = %d",a,x,b,a/b);
    else
    if (x=='%') printf("%d %c %d = %d",a,x,b,a%b);
    getch();
    return 0;
}