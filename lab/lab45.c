#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void sortStrings(char arr[50][100], int n)
{
    char temp[100];
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}
int main()
{
    int n, i;
    char str[50][100];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter 3 names: \n");
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        gets(str[i]);
    }
    printf("List input name: ");
    for (i = 0; i < n; i++)
        printf("\n%d. %s", i + 1, str[i]);
    sortStrings(str, n);
    printf("\nList sort name: ");
    for (i = 0; i < n; i++)
        printf("\n%d. %s", i + 1, str[i]);
    getch();
    return 0;
}