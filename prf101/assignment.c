#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 30

void Add(char RNumber[MAXN][9], char FName[MAXN][21], double FExam[MAXN], int *n)
{
    int stt = 0;
    printf("Add new student\n");
    printf("Press Enter to exit\n\n");
    do
    {
        fflush(stdin);
        printf("\nAdd student %d's rollnumber: ", *n + 1);
        gets(RNumber[*n]);
        if (*RNumber[*n] != '\0')
        {
            printf("Add student %d's name: ", *n + 1);
            gets(FName[*n]);
            printf("Add student %d's final exam: ", *n + 1);
            scanf("%lf", &FExam[*n]);
            *n += 1;
        }
        else
            stt = 1;
    } while (stt == 0);
}

void Search(char RNumber[MAXN][9], char FName[MAXN][21], double FExam[MAXN], int *n)
{
    char SearchName[20];
    int stt = 0;
    fflush(stdin);
    printf("\nAdd a name to search: ");
    gets(SearchName);
    for (int i = 0; i < *n; i += 1)
    {
        if (strcmp(SearchName, FName[i]) == 0)
        {
            printf("\nCode: %s\n", RNumber[i]);
            printf("Name: %s\n", FName[i]);
            printf("Final Exam: %lf\n", FExam[i]);
            stt = 1;
        }
    }
    if (stt == 0)
        printf("Not exist!\n");
}

void Remove(char RNumber[MAXN][9], char FName[MAXN][21], double FExam[MAXN], int *n)
{
    char RemoveNumber[8];
    int i = 0, stt = -1;
    fflush(stdin);
    printf("\nAdd roll number to remove: ");
    gets(RemoveNumber);
    for (; i < *n; i += 1)
        if (strcmp(RemoveNumber, RNumber[i]) == 0)
        {
            RNumber[i][0] = '\0';
            stt = i;
            break;
        }
    if (stt == -1)
        printf("Not exist! Can't remove!\n");
    else
    {
        for (; stt < *n; stt += 1)
        {
            strcpy(RNumber[stt], RNumber[stt + 1]);
            strcpy(FName[stt], FName[stt + 1]);
            FExam[stt] = FExam[stt + 1];
        }
        *n--;
        RNumber[stt - 1][0] = '\0';
        FName[stt - 1][0] = '\0';
        FExam[stt - 1] = 0;
        printf("\nRemoved\n\n");
    }
}

void Sort(char RNumber[MAXN][9], char FName[MAXN][21], double FExam[MAXN], int *n)
{
    char SwapNumber[8], SwapName[20];
    double SwapFExam;
    for (int i = 0; i < *n; i += 1)
    {
        for (int j = 0; j < *n; j += 1)
        {
            if (FExam[i] < FExam[j])
            {
                strcpy(SwapNumber, RNumber[i]);
                strcpy(RNumber[i], RNumber[j]);
                strcpy(RNumber[j], SwapNumber);
                strcpy(SwapName, FName[i]);
                strcpy(FName[i], FName[j]);
                strcpy(FName[j], SwapName);
                SwapFExam = FExam[i];
                FExam[i] = FExam[j];
                FExam[j] = SwapFExam;
            }
        }
    }
    printf("List after sorted: \n");
    for (int i = 0; i < *n; i += 1)
    {
        if (strcmp(FName[i], "\0") != 0)
            printf("%s || %s || %10.2lf\n", RNumber[i], FName[i], FExam[i]);
    }
}

int main()
{
    char RNumber[MAXN][9], FName[MAXN][21];
    double FExam[MAXN];
    int n = 0;
    int op = 0;
    do
    {
        system("cls");
        printf("\n******* MENU *******\n");
        printf("1- Add a student\n");
        printf("2- Remove a student based on a rollnumber inputted\n");
        printf("3- Search a student using a name inputted\n");
        printf("4- Print the list in ascending order based on Final_Exam\n");
        printf("5- Quit \n");
        printf("********************\n\n");
        printf("Select your option: ");
        scanf("%d", &op);
        fflush(stdin);
        switch (op)
        {
        case 1:
            Add(RNumber, FName, FExam, &n);
            break;
        case 2:
            Remove(RNumber, FName, FExam, &n);
            break;
        case 3:
            Search(RNumber, FName, FExam, &n);
            break;
        case 4:
            Sort(RNumber, FName, FExam, &n);
            break;
        case 5:
            printf("Turning off!\n");
            break;
        default:
            printf("Fail! Again!\n\n");
        }
        system("pause");
    } while (op != 5);
    return 0;
}
