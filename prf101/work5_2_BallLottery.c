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
    } while (total < 2 || total > 20);
    count = 1;
    srand(time(NULL));
    do
    {
        x = intRandom(1, 10);
        y = intRandom(1, 10);
        printf("Result of picks %d and %d :  %d + %d\n", count, count + 1, x, y);
        count += 2;
    } while ((x + y) != total);
    printf("You got your total in %d picks!", count - 1);
    getch();
    return 0;
}