#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int input(char str[])
{
    printf("Input string: ");
    fflush(stdin);
    gets(str);
}
int islower(int c)
{
    if (c >= 97 && c <= 122)
        return 1;
    else
        return 0;
}
int isupper(int c)
{
    if (c >= 65 && c <= 90)
        return 1;
    else
        return 0;
}
int toupper(int c)
{
    return c -= 32;
}
int tolower(int c)
{
    return c += 32;
}
int reverse(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (islower(str[i]) == 1)
            str[i] = toupper(str[i]);
        else if (isupper(str[i]) == 1)
            str[i] = tolower(str[i]);
    }
    strrev(str);
}
int main()
{
    char str[100];
    input(str);
    reverse(str);
    puts(str);
    getch();
    return 0;
}