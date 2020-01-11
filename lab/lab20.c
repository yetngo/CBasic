#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000
#define LINE 1000
#define LETTER 100
struct store
{
    int itemID;
    char itemName[30];
    double itemPrice;
    char productCategory[3];
};
struct store list[100];
int n = 0;
void add()
{
    int checkID, i, check = 0;
    do
    {
        printf("\nID number: ");
        scanf("%d", &checkID);
        for (i = 0; i < n - 1; i++)
            if (checkID == list[i].itemID)
                check++;
        if (check == 0)
        {
            list[n].itemID = checkID;
            fflush(stdin);
            printf("\nname: ");
            gets(list[n].itemName);
            printf("\nprice: ");
            scanf("%lf", &list[n].itemPrice);
            printf("\nproduct category: ");
            fflush(stdin);
            gets(list[n].productCategory);
            n++;
        }
        else
            printf("This id already exis!");
    } while (check != 0);
}

void removeID(int id)
{
    int i, pos;
    for (i = 0; i < n - 1; i++)
        if (list[i].itemID == id)
        {
            pos = i;
            for (i = pos; i < n - 1; i++)
                list[i] = list[i + 1];
            n--;
        }
        else
            printf("This ID is not exis!");
}

void changecost(int id)
{
    int i;
    double price;
    for (i = 0; i < n - 1; i++)
        if (list[i].itemID == id)
        {
            printf("new price: ");
            scanf("%lf", &price);
            list[i].itemPrice = price;
            printf("%s now costs %lf", list[i].itemName, list[i].itemPrice);
        }
        else
            printf("This ID is not exis!");
}
void search(char name[])
{
    int i;
    for (i = 0; i < n - 1; i++)
        if (strcmp(list[i].itemName, name) == 0)
            printf("%d\t%s\t%lf\t%s", list[i].itemID, list[i].itemName, list[i].itemPrice, list[i].productCategory);
        else
            printf("This item doesn't exit!");
}
void print()
{
    int i;
    printf("ID\tProduct\tPrice\tCategory");
    for (i = 0; i < n - 1; i++)
        printf("%d\t%s\t%lf\t%s", list[i].itemID, list[i].itemName, list[i].itemPrice, list[i].productCategory);
}
int main()
{
    printf("Welcome to the grocery store!\n");
    printf("Please input the file you'd like to load into stock.\n");
    fflush(stdin);
    char FILENAME[10];
    gets(FILENAME);
    int id;
    char name[30];
    double price;
    char pc[2];
    int i = 0;
    FILE *fp = fopen(FILENAME, "r+");
    while(fscanf(fp,"%d %s %lf %s",&id,name,&price,pc)!=EOF)
    {
        list[n].itemID=id;
        strncpy(list[n].itemName,name,30);
        list[n].itemPrice=price;
        strncpy(list[n].productCategory,pc,3);
        n++;
    }
    printf("%s has been properly loaed into the database.\n\n", FILENAME);
    
    int op;
    int reid;
    int chid;
    char fname[30];
do
{
    printf("\nPlease make one of the following selections:");
    printf("\n1.Add new item");
    printf("\n2.Delete item");
    printf("\n3.Change the cost of an item");
    printf("\n4.Search for item");
    printf("\n5.Displsy inventory details");
    printf("\n6.Quit");
    printf("\nEnter option:");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        add();
        break;
    case 2:
        
        printf("ID number of the product to delete: ");
        scanf("%d", &reid);
        removeID(reid);
        printf("item is deleted");
        break;
    case 3:
        
        printf("ID number of the product to change cost: ");
        scanf("%d", &chid);
        changecost(chid);
        break;
    case 4:
        
        printf("Name item to search: ");
        fflush(stdin);
        gets(fname);
        search(fname);
    case 5:
        print();
    }

} while (0 < op && op < 5);
}