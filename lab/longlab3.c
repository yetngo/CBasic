#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int play(float *mon)
{
    int a, b, c;
    srand(time(NULL));
    a = rand() % 10;
    b = rand() % 10;
    c = rand() % 10;
    printf("The slot machine shows %d%d%d\n", a, b, c);
    *mon -= 0.25;
    if (a == b && a == c)
    {
        printf("You win the big prize\n");
        *mon += 10;
    }
    else if (a == b || a == c || b == c)
    {
        printf("You win 50 cents!\n");
        *mon += 0.5;
    }
    else
        printf("Sorry you don't win anything.\n");
    printf("You have $%f\n", *mon);
}
int main()
{
    FILE *fp = fopen("longlab3.txt", "r+");
    float money;
    if (fp == NULL)
    {
        printf("\nCan't open file or file doesn't exist.");
        exit(0);
    }

    fscanf(fp, "%f", &money);
    float *mon;
    mon = &money;
    int op;
    do
    {
        printf("Choose one of the following menu options:\n");
        printf("1) Play the slot machine.\n");
        printf("2) Save game.\n");
        printf("3) Cash out.\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            play(mon);
            break;
        }
        case 2:
        {
            rewind(fp);
            fprintf(fp,"%f", *mon);
            printf("Your money had saved!\n");
            break;
        }
        case 3:
        {
            printf("Thank you for playing! You end with $%f\n", *mon);
            break;
        }
        default:
            break;
        }
        if (*mon == 0)
            printf("You don't have enough money to play!!");
        printf("\n\n");
    } while (op > 0 && op < 3 && *mon > 0);
    getch();
    return 0;
}