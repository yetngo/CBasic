#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, len, max = 0, key;
    int count[26];
    do
    {
        printf("Enter any string: ");
        gets(str);

        len = strlen(str);

        for (i = 0; i < 26; i++)
            count[i] = 0;

        strlwr(str);
        for (i = 0; i < len; i++)
            count[str[i] - 97]++;

        for (i = 0; i < 26; i++)
            if (count[i] != 0)
                printf("'%c' = %d\n", (i + 97), count[i]);
        key = getch();
    } while (key != 27);

    getch();
    return 0;
}