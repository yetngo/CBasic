#include <stdio.h>
#include <conio.h>

int main()
{
    int key;
    do
    {
        int num, i;
        printf("Please enter a number (1-9): ");
        scanf("%d", &num);
        printf("Multiplication table for %d number:", num);
        for (i = 1; i <= 10; i++)
            printf("\n%d x %d = %d", num, i, num * i);
        printf("\nPress Enter to continue, esc to quit...\n");
        key = getch();
    } while (key != 27);
    getch();
    return 0;
}