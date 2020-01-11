#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int key;
    do
    {
        char str[100], revstr[100];
        int i, index, start, end;
        fflush(stdin);
        printf("Please enter string: ");
        gets(str);
        int len = strlen(str);
        start = len - 1;
        end = len - 1;
        index = 0;
        while (start > 0)
        {
            if (str[start] == ' ')
            {
                i = start + 1;
                while (i <= end)
                {
                    revstr[index] = str[i];
                    i++;
                    index++;
                }
                revstr[index++] = ' ';
                end = start - 1;
            }
            start--;
        }
        for (i = 0; i <= end; i++)
        {
            revstr[index] = str[i];
            index++;
        }
        revstr[index] = '\0';
        printf("\nThe old string: %s\n\n", str);
        printf("The reversed string: %s\n\n", revstr);
        printf("Press enter to continue another reverse, ESC to exit\n\n");
        key = getch();
    } while (key != 27);
    getch();
    return 0;
}