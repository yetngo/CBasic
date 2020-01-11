#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100], i = 0;
    printf("Enter the elements of the array:\n");
    do
    {
        scanf("%d", &arr[i]);
        i++;
    } while (arr[i - 1] != 0);
    int len = i - 1;
    int max = arr[0];
    printf("Array elements:\n");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\nArray maximum value: \nThe max is %d\n", max);
    printf("Array even values: \n");
    for (i = 0; i < len; i++)
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    getch();
    return 0;
}