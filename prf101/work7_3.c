//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

struct drink
{
    char name[21], make[21];
    int volume, price, duration;
};
struct drink list[100];
int n = 0;

void add()
{
    fflush(stdin);
    printf("\nname: ");
    gets(list[n].name);
    fflush(stdin);
    printf("\nmake: ");
    gets(list[n].make);
    printf("\nvolume: ");
    scanf("%d", &list[n].volume);
    printf("\nprice: ");
    scanf("%d", &list[n].price);
    printf("\nduration: ");
    scanf("%d", &list[n].duration);
    n++;
}

void findbymake()
{
    int i = 0, k = 0;
    char make[21];
    fflush(stdin);
    printf("\ninput make: ");
    gets(make);
    for (i = 0; i < n; i++)
        if (i < n && strcmp(list[i].make, make) == 0)
        {
            printf("\n|%2d|%20s|%-20s|%10.2d|%10.2d|%10.2d : ", i + 1, list[i].name, list[i].make,
                   list[i].volume, list[i].price, list[i].duration);
            k++;
        }
    if (k == 0)
        printf("Not found");
}

void findbyvolume()
{
    int i = 0, v1, v2, k = 0;
    printf("\ninput volume 1: ");
    scanf("%d", &v1);
    printf("\ninput volume 2: ");
    scanf("%d", &v2);
    for (i = 0; i < n; i++)
        if (v1 < list[i].volume && list[i].volume < v2)
        {
            printf("\n|%2d|%20s|%-20s|%10.2d|%10.2d|%10.2d : ", i + 1, list[i].name, list[i].make,
                   list[i].volume, list[i].price, list[i].duration);
            k++;
        }
    if (k == 0)
        printf("Not found");
}

void sort()
{
    int i, j;
    struct drink temp;
    for (i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--)
        {
            if (list[j].volume < list[j - 1].volume)
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
        printf("\n|%2d|%20s|%-20s|%10.2d|%10.2d|%10.2d : ", i + 1, list[i].name, list[i].make,
               list[i].volume, list[i].price, list[i].duration);
    }
}

int main()
{
    int choice, pos;

    char code[9];

    printf("1. Adding a new soft drink\n");
    printf("2. Printing out items which belong to a known make.\n");
    printf("3. Printing out items whose volumes are between v1 and v2 ( integers)  \n");
    printf("4. Printing the list in ascending order based on volumes then prices.\n");
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
            findbymake();
            break;
        case 3:
            findbyvolume();
            break;
        case 4:
            printf("sort based on volume");
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