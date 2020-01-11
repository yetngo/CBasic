///Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define Max 100

int search(int length, int a[])
{
    int n;
    printf("Enter a number to search: ");
    scanf("%d", &n);
    int i, count = 0;
    for (i = 0; i <= length - 1; i++)
        if (a[i] == n)
        {
            printf("Found! a[%d]=%d\n", i, a[i]);
            count++;
        }
    if (count = 0)
        printf("This array don't have any number equal %d", n);
}
int print(int a[], int length)
{
    int i;
    for (i = 0; i <= length - 1; i++)
        printf("a[%d]=%d\n", i, a[i]);
}

int val(int a[], int length)
{
    int i, min, max, count = 0;
    printf("enter min value: ");
    scanf("%d", &min);
    printf("enter max value: ");
    scanf("%d", &max);
    for (i = 0; i <= length - 1; i++)
        if (min < a[i] && a[i] < max)
        {
            printf("Found! a[%d]=%d\n", i, a[i]);
            count++;
        }
    if (count = 0)
        printf("This array don't have any number between min and max values!\n");
}
int ascending(int *a, int length)
{
    int minIndex;
    int i, j;
    for (i = 0; i < length - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < length; j++)
            if (a[minIndex] > a[j])
                minIndex = j;
        if (minIndex > i)
        {
            int t = a[minIndex];
            a[minIndex] = a[i];
            a[i] = t;
        }
    }
    for (i = 0; i <= length - 1; i++)
        printf("%d  ", a[i]);
    printf("\n");
}

int main()
{
    int op, i, length = 0;
    int a[Max];
    printf("input length of array: ");
    scanf("%d", &length);
    for (i = 0; i <= length - 1; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    do
    {
        printf("1- Add  a value\n");
        printf("2- Search a value\n");
        printf("3- Print out the array\n");
        printf("4- Print out values in a range\n");
        printf("5- Print out the array in ascending order\n");
        printf("6- Quit\n");
        printf("Select an operation:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            length++;
            printf("a[%d]=", length - 1);
            scanf("%d", &a[length - 1]);
            break;
        case 2:
        {
            search(length, a);
        }
        break;
        case 3:
        {
            print(a, length);
        }
        break;
        case 4:
        {

            val(a, length);
        }
        break;
        case 5:
        {
            ascending(a, length);
        }
        break;
        case 6:
            break;
        }
    } while ((op > 0) && (op < 6));
    getch();
    return 0;
}
