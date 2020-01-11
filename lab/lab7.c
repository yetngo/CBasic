#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int check(char *str)
{
    int i=0, k=0;
    while(i < strlen(str))
    {
        if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z') || ('0' <= str[i] && str[i] <= '9') || str[i] == ' ')
            i++;
            else {
                k++;
                i++;
            }
    }
    return k;
}
int space(char *str)
{
int len = strlen(str), i=0;
        while (i < len)
        {
            if (str[i] == ' ' && str[i + 1] == ' ')
            {
                for (int j = i; j < len; j++)
                    str[j] = str[j + 1];
                len--;
            }
            else
                i++;
        }
        if (str[0] == ' ')
        {
            for (int i = 0; i < len; i++)
                str[i] = str[i + 1];
            len--;
        }
        puts(str);
}
int main()
{
    char str[100];
    int key;
    do
    {
        do
        {
            printf("Enter a string: ");
            fflush(stdin);
            gets(str);
            if (check(str) != 0)
                printf("Not allow special characters!");
        } while (check(str) != 0);
        space(str);
        printf("\nPress enter to continue another reverse, ESC to exit\n\n");
        key = getch();
    } while (key != 27);
    getch();
    return 0;
}
