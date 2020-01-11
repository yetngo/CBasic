#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[21];
};
struct student list[100];
int n = 0;

int add()
{
    if (n >= 100)
        printf("The list has full. It cannot add a new student.");
    else
    {
        fflush(stdin);
        printf("\nEnter new student name: ");
        gets(list[n].name);
        n++;
        printf("Stundent has been added to list successfully!");
    }
}

int removestd()
{
    char rname[21];
    printf("\nEnter student name to remove: ");
    fflush(stdin);
    gets(rname);
    int i = 0, pos;
    for (i = 0; i < n; i++)
        if (strcmp(rname, list[i].name) == 0)
            pos = i;
    for (i = pos; i < n - 1; i++)
        list[i] = list[i + 1];
    n--;
    printf("Student name has been removed successfully!");
}

int search()
{
    int i = 0, k = 0;
    char sname[21];
    fflush(stdin);
    printf("\nEnter student name to search: ");
    gets(sname);
    for (i = 0; i < n; i++)
        if (strcmp(sname, list[i].name) == 0)
        {
            printf("The posiion of student name in list is %d", i + 1);
            k++;
        }
    if (k == 0)
        printf("Not found");
}

int sort()
{
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--)
        {
            if (strcmp(list[j].name, list[j - 1].name) == -1)
            {
                temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
}
int print()
{
    printf("\nTotal student: %d", n);
    for (int i = 0; i < n; i++)
        printf("\n%d. %-20s ", i + 1, list[i].name);
}

int main()
{
    int op;
    printf("\n1- Add a student");
    printf("\n2- Remove a student");
    printf("\n3- Search a student");
    printf("\n4- Print the list in ascending folder");
    printf("\n5- Exit");
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
            removestd();
            break;
        case 3:
            search();
            break;
        case 4:
            sort();
            print();
            break;
        default:
            break;
        }
    } while (op != 5);
    getch();
    return 0;
}
