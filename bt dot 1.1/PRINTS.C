#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    char c;
    printf("enter an int:");
    scanf("%d", &a);
    printf("enter a float:");
    scanf("%f", &b);
    printf("enter a character:");
    scanf(" %c", &c);
    printf("%d as an integer \n",a);
    printf("%f as a float \n",b);
    printf("'%c' as a character",c);
    getch();
    return 0;
}