#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char code[10];
    char name[21];
    char bir[20];
    double point;
};
struct student list[100];
int n = 0;

int add()
{
    int key;
    do
    {
        FILE *fp1;
        fp1 = fopen("student.txt", "a+");
        fwrite("\n", 1, 1, fp1);
        fflush(stdin);
        printf("\nEnter new student name: ");
        printf("\nStudent code: ");
        gets(list[n].code);
        fwrite(list[n].code, 1, strlen(list[n].code), fp1);
        fwrite("\n", 1, 1, fp1);
        printf("\nStudent name: ");
        gets(list[n].name);
        fwrite(list[n].name, 1, strlen(list[n].name), fp1);
        fwrite("\n", 1, 1, fp1);
        printf("\nDate of birth: ");
        gets(list[n].bir);
        fwrite(list[n].bir, 1, strlen(list[n].bir), fp1);
        fwrite("\n", 1, 1, fp1);
        printf("\nLearning point: ");
        scanf("%lf", &list[n].point);
        fprintf(fp1,"%lf",list[n].point);
        n++;
        printf("\nStundent has been added to list successfully!");
        printf("\nPress enter to continue, Esc to return the main menu");
        key = getch();
    } while (key != 27);
}

int search()
{
    int i = 0, k = 0;
    char sname[21];
    fflush(stdin);
    printf("\nEnter student name: ");
    gets(sname);
    for (i = 0; i < n; i++)
        if (strstr(list[i].name, sname) != NULL)
        {
            printf("\nStudent code: %s", list[i].code);
            printf("\nStudent name: %s", list[i].name);
            printf("\nDate of birth: %s", list[i].bir);
            printf("\nLearning point: %lf", list[i].point);
            k++;
        }
    if (k == 0)
        printf("Not found");
}

int print()
{
    printf("\nStudent list:");
    printf("---------------");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent code: %s", list[i].code);
        printf("\nStudent name: %s", list[i].name);
        printf("\nDate of birth: %s", list[i].bir);
        printf("\nLearning point: %.2lf", list[i].point);
    }
}

int main()
{
    FILE *fp;
    fp = fopen("student.txt", "r");
    do
    {
        fscanf(fp, "%s\n%s\n%s\n%lf", list[n].code, list[n].name, list[n].bir, &list[n].point);
        n++;
    } while (!feof(fp));
    int op;
    printf("\n1. Enter student list");
    printf("\n2. Look up student");
    printf("\n3. Display student list");
    printf("\n4. Exit");
    do
    {
        printf("\n*************************\n");
        printf("\nEnter your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            add();
            break;
        case 2:
            search();
            break;
        case 3:
            print();
            break;
        }
    } while (op != 4);
    getch();
    return 0;
}
