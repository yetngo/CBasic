#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    (a%2==0)?printf("Divisible"):printf("Not divisible");
    getch();
    return 0;
}