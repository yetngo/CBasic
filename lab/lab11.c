#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int bintodec()
{
    int num;
    printf("Enter binary number: ");
    scanf("%d", &num);
    int x = 0, a, i;
    printf("\nDecimal number: ");
    for (i = 0; num != 0; ++i)
    {
        a = num % 10;
        x = (a) * (pow(2, i)) + x;
        num = num / 10;
    }
    printf("%d", x);
}
int octtodec()
{
    int num;
    printf("Enter octal number: ");
    scanf("%d", &num);
    int x = 0, a, i;
    printf("\nDecimal number: ");
    for (i = 0; num != 0; ++i)
    {
        a = num % 10;
        x = (a) * (pow(8, i)) + x;
        num = num / 10;
    }
    printf("%d", x);
}
int hextodec()
{
    char num[100];
    fflush(stdin);
    printf("Enter any hexadecimal number: ");
    gets(num);
    int x = 0, i;
    int base = 1;

    for (i = strlen(num) - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            x += (num[i] - 48) * base;
            base *= 16;
        }
        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            x += (num[i] - 55) * base;
            base *= 16;
        }
    }
    printf("\nDecimal number: ");
    printf("%d", x);
}
int main()
{
    int op, key;
    do
    {
        printf("\n1.	Convert binary number to decimal number");
        printf("\n2.	Convert octal number to decimal number");
        printf("\n3.	Convert hexadecimal number to decimal number");
        printf("\n4.	Exit");
        printf("\nPlease choose number (1 - 4): ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            bintodec();
            break;
        case 2:
            octtodec();
            break;
        case 3:
            hextodec();
            break;
        }
        printf("\nPress enter to continue, Esc to return the main menu");
    } while (1 > op || op > 4 || key != 27);
    getch();
    return 0;
}