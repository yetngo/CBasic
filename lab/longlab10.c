#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>

struct memcache
{
    char key[50];
    char data[100];
    int time;
    clock_t stime;
};
struct memcache list[100];
int n = 0;

int expiration()
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (list[i].time == 0)
            continue;
        if ((clock() - list[i].stime) / CLOCKS_PER_SEC > list[i].time)
        {
            list[i] = list[n + 1];
            n--;
        }
    }
}
int case1()
{
    expiration();
    int i;
    char ckey[50];
    do
    {
        fflush(stdin);
        printf("\nEnter your key: ");
        gets(ckey);
        for (i = 0; i < n; i++)
            if (strcmp(ckey, list[i].key) == 0)
            {
                printf("\nThis key already existed!");
                return;
            }
    } while (strcmp(list[i].key, ckey) == 0);
    strcpy(list[n].key, ckey);
    fflush(stdin);
    printf("\nEnter your variable: ");
    gets(list[n].data);
    printf("\nEnter expire time: ");
    scanf("%d", &list[n].time);

    printf("\nStore data success with key '%s', using on-the-fly compression expire time is %d seconds.", list[n].key, list[n].time);
    list[n].stime = clock();
    n++;
}
int case2()
{
    expiration();
    int i, check = 0;
    char ckey[50];
    fflush(stdin);
    printf("\nEnter your key: ");
    gets(ckey);
    for (i = 0; i < n; i++)
        if (strcmp(ckey, list[i].key) == 0)
        {
            printf("\nYour data is: %s", list[i].data);
            check = 1;
            break;
        }
    if (check == 0)
        printf("\nNot Found!");
}
int case3()
{
    expiration();
    int i, pos, check = 0;
    char ckey[50];
    fflush(stdin);
    printf("\nEnter your key: ");
    gets(ckey);
    for (i = 0; i < n; i++)
        if (strcmp(list[i].key, ckey) == 0)
        {
            pos = i;
            check = 1;
            break;
        }
    for (i = pos; i < n; i++)
        list[i] = list[i + 1];
    if (check == 1)
    {
        n--;
        printf("Delete success.");
    }
    else
        printf("\nNot Found!");
}

int case4()
{
    n = 0;
    printf("\nSuccess");
}

int main()
{
    int op;

    printf("========== Memcache ==========\n");

    printf("\n1) Store data");
    printf("\n2) Retrieve item");
    printf("\n3) Delete item");
    printf("\n4) Flush all existing items");
    printf("\n5) Exit the program");
    do
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            case1();
            break;
        case 2:
            case2();
            break;
        case 3:
            case3();
            break;
        case 4:
            case4();
            break;
        }
    } while (op > 0 && op < 5);
    getch();
    return 0;
}