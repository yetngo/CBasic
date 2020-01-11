#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define LINE 1000
#define LETTER 100

int checkmisspell(char arr[LINE][LETTER], char word[10], int a, int b)
{
    int i;
    for (i=a;i<=b;i++)
    if (strcmp(word,arr[i])==0)
    return 0;
    return 1;
}
int misspell(char arr[LINE][LETTER], int i, int a, int b)
{
    char *token;
    char word[100][100];
    int x = 0;
    token = strtok(arr[i], " ");
    while (token != NULL)
    {
        strcpy(word[x],token);
        x++;
        token = strtok(NULL, " ");
    }
    int j, count=0;
    for (j = 0; j <x; j++)
        if ( checkmisspell(arr,word[j],a,b)== 1)
        count++;        
    if(count>3) return 1;
    return 0;
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
    char line[LINE][LETTER],checkmis[LINE][LETTER];
    int i = 0, tot = 0;
    FILE *fp = fopen("textmsg.txt", "r+");
    while (fgets(line[i], LINE, fp))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
    n = atoi(line[0]);
    m = atoi(line[n + 1]);
    t = atoi(line[n + m + 2]);
    for(i=0;i<=n+m+t+2;i++)
    strcpy(checkmis[i],line[i]);
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
                if (strstr(line[i + 1], chr) != NULL 
                || forbidden(line, i + 1, n + 2, n + m + 1) == 1 
                || misspell(checkmis, i + 1, 1, n)!=0)
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