//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define max 100

int intRandom(int Min, int Max)
{
    return Min + rand() % (Max + 1 - Min);
}

int add(int *n, int a[max])
{
    srand(time(NULL));
    for (int i = 0; i < *n; i++)
        a[i] = intRandom(-100, 100);
}

int count(int *n, int a[max])
{
    int negative = 0;
    for (int i = 0; i < *n; i++)
        if (a[i] < 0)
            negative++;
    printf("\nthere are %d negative numbers", negative);
}

int sort(int *n, int a[max])
{
    printf("\nlist after sorted: ");
    int i, j;
    for (i = 0; i < *n; i++)
        for (j = 0; j < *n; j++)
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int removenum(int *n, int a[max])
{
    int x, i, k, count = 0;
    printf("\nInput remove number: ");
    scanf("%d", &x);
    for (i = 0; i < *n; i++)
        if (a[i] == x)
        {
            k = i;
            count++;
        }
    if (k < *n)
        for (i = k; i < *n - 1; i++)
            a[i] = a[i + 1];
    --*n;
    if (count == 0)
        printf("not found");
}

int insertnum(int *n, int a[max])
{
    int z, i, k;
    printf("\nInput insert number: ");
    scanf("%d", &z);
    for (int i = 0; i < *n - 1; i++)
        if (a[i] <= z && a[i + 1] >= z)
        {
            k = i;
            break;
        }
    ++*n;
    for (int i = *n - 1; i >= k; i--)
        a[i + 1] = a[i];
    a[k + 1] = z;
}

int print(int *n, int a[max])
{
    for (int i = 0; i < *n; i++)
        printf("%d  ", a[i]);
}

int main()
{
    int n;
    printf("Input length of array: ");
    scanf("%d", &n);
    int a[max];
    // 1- Use functions in the library <math.h> and <time.h> for getting an array A of integers at random in interval [-100, 100].
    add(&n, a);
    print(&n, a);
    printf("\n");
    //2- Count for negative integers in array A.
    count(&n, a);
    printf("\n");
    //3- Sort array A in ascending order.
    sort(&n, a);
    print(&n, a);
    printf("\n");
    //4- Input a number X then remove X.
    removenum(&n, a);
    print(&n, a);
    printf("\n");
    //5- Input a number Z then insert X
    insertnum(&n, a);
    print(&n, a);
    getch();
    return 0;
}