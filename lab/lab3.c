#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}
int sort(int arr[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n; i++)
        for (j = i; j < n; j++)
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

int add(int arr[], int *n)
{
    int new, i;
        printf("\nPlease enter a new value: ");
        scanf("%d", &new);
    (*n)++;
    arr[(*n) - 1] = new;
    printf("New array:\n");
    sort(arr, *n);
    print(arr, *n);
}
int rem(int arr[], int *n, int dup)
{
    int i;
    for (i = dup; i < *n; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

int main()
{
    int n, i, check = 0;
    int arr[100];
    printf("Please enter size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element [%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("The array after sorting:\n");
    sort(arr, n);
    print(arr, n);
    add(arr, &n);
    for (i = 0; i < n; i++)
        if (arr[i] == arr[i + 1])
        {
            rem(arr, &n, i);
            i--;
            check++;
        }
    if (check == 0)
        printf("\nThere are not any duplicate elements in array!");
    else
    {
        printf("\nFind dulicate element in array! Remove!\n");
        printf("New array:\n");
        print(arr, n);
    }
    getch();
    return 0;
}