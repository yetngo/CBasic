//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    char code[9], name[21];
    double salary, allowance;
};
struct employee list[100];
int n = 0;

void add()
{
    fflush(stdin);
    printf("\ncode: ");
    gets(list[n].code);
    fflush(stdin);
    printf("\nname: ");
    gets(list[n].name);
    printf("\nsalary: ");
    scanf("%lf", &list[n].salary);
    printf("\nallowance: ");
    scanf("%lf", &list[n].allowance);
    n++;
}
void printname()
{
    char name[21];
    int i;
    printf("\nname : ");
    gets(name);
    strupr(list[n].name);
    for (i = 0; i < n; i++)
        if (strcmp(list[i].name, name) == 0)
            printf("\n|%2d|%8s|%-20s|%0.2lf|%0.2lf| : ", i + 1, list[i].code, list[i].name, list[i].salary, list[i].allowance);
}

int findcode(char code[])
{
    int i = 0;
    while (i < n && strcmp(list[i].code, code) != 0)
        i++;
    if (i == n)
        i = -1;
    return i;
}

void removecode(int pos)
{
    int i;
    for (i = pos; i < n - 1; i++)
        list[i] = list[i + 1];
    n--;
}
void sort()
{
    int i, j;
    struct employee temp;
    for (i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--)
        {
            if (list[j].salary + list[j].allowance > list[j - 1].salary + list[j - 1].allowance)
            {
                temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
}

void printall()
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n|%2d|%8s|%-20s|%10.2f|%10.2f| : ", i + 1, list[i].code, list[i].name,
               list[i].salary, list[i].allowance);
    }
}

int main()
{
    int choice, pos;

    char code[9];

    printf("1. add new employee\n");
    printf("2. find data about employee\n");
    printf("3. remove an employee\n");
    printf("4. print the list in descending order\n");
    printf("5. quit!\n");
    do
    {
        printf("\nyour choice is : ");
        scanf("%d%*c", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            printname();
            break;
        case 3:
            printf("\ncode: ");
            gets(code);
            pos = findcode(code);
            if (pos > 0)
                removecode(pos);
            printall();
            break;

        case 4:
            sort();
            printall();
            break;
        case 5:
            break;

        default:
            break;
        }
    } while (choice != 5);
}