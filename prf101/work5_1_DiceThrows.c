//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int intRandom(int min, int max)
{
    return min + rand() % (max + 1 - min);
}
int main()
{
    int total, x, y, count;
    do
    {
        printf("Total sought : ");
        scanf("%d", &total);
    } while (total < 2 || total > 12);
    count = 1;
    srand(time(NULL));
    do
    {
        x = intRandom(1, 6);
        y = intRandom(1, 6);
        printf("Result of throw %d: %d + %d\n", count, x, y);
        count++;
    } while ((x + y) != total);
    printf("You got your total in %d throws!", count - 1);
    getch();
    return 0;
}