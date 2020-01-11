#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int input(int n, int arr[])
{
    int i;
    printf("Input elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d=", i + 1);
        scanf("%d", &arr[i]);
    }
}
int sumodd(int n, int arr[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
            s += arr[i];
    return s;
}
int sumeven(int n, int arr[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            s += arr[i];
    return s;
}
int main()
{
    int n;
    int arr[100];

    printf("Sum Even Odd program\n");
    do
    {
        printf("Enter a number of element n(max=10)=");
        scanf("%d", &n);
    } while (n > 10 || n < 1);
    input(n, arr);
    printf("Sum of Even=%d\n", sumeven(n, arr));
    printf("Sum of Odd=%d\n", sumodd(n, arr));

    getch();
    return 0;
}