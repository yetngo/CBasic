#include <stdio.h>
#include <conio.h>

int main()
{
    float arr[100],min;
    int n, i, k;
    printf("Please enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element[%d]=", i);
        scanf("%f", &arr[i]);
    }
    min = arr[1];
    k = 1;
    for (i = 0; i < n; i++)
        if (arr[i] < min)
        {
            min = arr[i];
            k = i;
        }
    printf("The smallest element: %.2f - Its position: %d", min, k);
    getch();
    return 0;
}