#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, len, key;
    int count[26];
    do
    {
        printf("\nEnter any string: ");
        gets(str);

        len = strlen(str);

        for (i = 0; i < 26; i++)
            count[i] = 0;

        tolower(str);

        for (i = 0; i < len; i++)
            count[str[i] - 97]++;

        printf("\nFound character:\n");
        for (i = 0; i < 26; i++)
            if (count[i] == 1)
                printf("%c   ", (i + 97));
        printf("\nPress enter to continue another reverse, ESC to exit\n\n");
        key = getch();
    } while (key != 27);
    getch();
    return 0;
}