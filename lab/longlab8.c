#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define LINE 1000
#define LETTER 100

int checkmisspell(char arr[LINE][LETTER], char word[10], int a, int b)
{
    int i;
    for (i = a; i <= b; i++)
        if (strcmp(word, arr[i]) == 0)
            return 0;
    return 1;
}

int misspell(char arr[LINE][LETTER], int i, int a, int b)
{
    int x = 0, count = 0,k=0;
    char word[LINE][LETTER];
    while (arr[i][k]!="\0")
    {
        while(arr[i][k]!=" ") strcpy
    }
        if (checkmisspell(arr, token, a, b) == 1)
            count++;
        token = strtok(NULL, " ");
    }
    if (count > 3)
        return 1;
    else return 0;
}
int forbidden(char arr[LINE][LETTER], int i, int a, int b)
{
    int j;
    for (j = a; j <= b; j++)
        if (strstr(arr[i], arr[j]) != NULL)
        {
            return 1;
            break;
        }
        else
            return 0;
}
int main()
{
    int n, m, t, check;
    char dictionary[LINE][LETTER],forbid[LINE][LETTER],mes[LINE][LETTER],time[LINE][LETTER];
    int i = 0, tot = 0;
    FILE *fp = fopen("textmsg.txt", "r+");
    while (fgets(line[i], LINE, fp))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
    n = atoi(line[0]);
    for (i=1;i<=n;i++)
    strcpy(mes[i-1],line[i]);
    m = atoi(line[n + 1]);
    t = atoi(line[n + m + 2]);
    char ch = 'A';
    int nummes = 1, k;
    char chr[20] = "i love you";
    for (i = n + m + 3; i < tot; i += 2)
    {
        strlwr(line[i + 1]);

        if (strchr(line[i], ch) != NULL)
        {
            if (1 <= atoi(line[i]) && atoi(line[i]) < 7)
            {
                if (strstr(line[i + 1], chr) != NULL || forbidden(line, i + 1, n + 2, n + m + 1) == 1
                || misspell(line, i + 1, 1, n)!=0)
                    printf("\nMessenger #%d: FAILED TO SEND", nummes);
                else
                {
                    printf("\nMessenger #%d:", nummes);
                    for (k = 1; k < strlen(line[i + 1]); k++)
                        printf("%c", line[i + 1][k]);
                }
            }
            else
            {
                printf("\nMessenger #%d:", nummes);
                for (k = 1; k < strlen(line[i + 1]); k++)
                    printf("%c", line[i + 1][k]);
            }
        }
        else
        {
            printf("\nMessenger #%d:", nummes);
            for (k = 1; k < strlen(line[i + 1]); k++)
                printf("%c", line[i + 1][k]);
        }
        nummes++;
    }
    getch();
    return 0;
}