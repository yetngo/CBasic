#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000
#define LINE 1000
#define LETTER 100
struct dictionary
{
    char name[20];
    char meaning[100];
};
struct dictionary list[100];
int n = 0;
void add()
{
    FILE *fp1 = NULL;
    fp1 = fopen("index.txt", "a+");
    printf("\nEnter a new word: ");
    fflush(stdin);
    gets(list[n].name);
    fwrite(list[n].name, 1, strlen(list[n].name), fp1);
    fwrite("\n", 1, 1, fp1);
    fclose(fp1);
    FILE *fp2 = NULL;
    fp2 = fopen("meaning.txt", "a+");
    printf("\nMeaning: ");
    fflush(stdin);
    gets(list[n].meaning);
    fwrite(list[n].meaning, 1, strlen(list[n].meaning), fp2);
    fwrite("\n", 1, 1, fp2);
    fclose(fp2);
    n++;
}

void edit(char eword[20])
{
    int i, k = -1;
    char emeaning[100];
    for (i = 0; i < n; i++)
        if (strcmp(list[i].name, eword) == 0)
            k = i;
    if (k != -1)
    {
        printf("New meaning: ");
        fflush(stdin);
        gets(emeaning);
        strcpy(list[k].meaning, emeaning);
        FILE *fp2 = NULL;
        fp2 = fopen("meaning.txt", "a+");
        for (i = 0; i < n; i++)
            fwrite(list[i].meaning, 1, strlen(list[i].meaning), fp2);
    }
    else
        printf("This item doesn't exit!");
}
void search(char sword[20])
{
    int i, k = -1;
    for (i = 0; i < n; i++)
        if (strcmp(list[i].name, sword) == 0)
            k = i;
    if (k != -1)
        printf("Meaning: %s", list[k].meaning);
    else
        printf("This item doesn't exit!");
}

int main()
{
    char w[20], m[1000];
    FILE *fp1 = NULL;
    fp1 = fopen("index.txt", "r");
    int i = 0;
    while (fscanf(fp1, "%s", w) != EOF)
    {
        strcpy(list[n].name, w);
        n++;
    }
    fclose(fp1);

    FILE *fp2 = NULL;
    fp2 = fopen("meaning.txt", "r");
    while (fscanf(fp2, "%s", m) != EOF)
    {
        strcpy(list[i].meaning, m);
        i++;
    }
    fclose(fp2);
    char eword[20], sword[20];
    printf("1. Create a new word");
    printf("\n2. Edit a word");
    printf("\n3. Look up meaning");
    printf("\n4. Exit");
    int op;
    do
    {
        printf("\nPlease choose number(1-4): ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            add();
            break;
        case 2:
            printf("\nEnter a word to update: ");
            fflush(stdin);
            gets(eword);
            edit(eword);
            break;
        case 3:
            printf("\nEnter a word to look up: ");
            fflush(stdin);
            gets(sword);
            search(sword);
            break;
        }
    } while (op > 0 && op < 4);
}
