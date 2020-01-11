#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int buy(int *money, int *chips)
{
    int cash;
    printf("How much cash do you want to spend for chips?\n");
    scanf("%d", &cash);
    if (cash > *money)
        printf("Sorry,you do not have that much money. No chips bought.");
    else
    {
        *chips += (cash / 11);
        *money -= (cash - cash % 11);
        report(money, chips);
    }
}
int sell(int *money, int *chips)
{
    int chip;
    printf("How many chips do you want to sell?\n");
    scanf("%d", &chip);
    if (chip > *chips)
        printf("Sorry, you do not have that many chips. No chips sold.");
    else
    {
        *chips -= chip;
        *money += (chip * 10);
        report(money, chips);
    }
}
int random()
{
    srand(time(NULL));
    return 2 + rand() % (12 + 1 - 2);
}

int craps(int k, int *chips)
{
    char r;
    int di;
    int chip, dic;
    printf("How many chips would you like to bet?");
    scanf("%d", &chip);
    if (chip == 0)
        printf("Sorry, that is not allowed.No game played.");
    else if (chip > *chips)
        printf("Sorry you don't have many chips to bet. No game played.");
    else
    {
        printf("Press 'r' and hit enter for your first roll.\n");
        scanf(" %c", &r);

        if (r == 'r')
        {
            di = random();
            printf("You rolled a %d.", di);
        }
        if (di == 7 || di == 11)
        {
            printf("You win!");
            *chips += chip;
        }
        else if (di == 2 || di == 3 || di == 12)
        {
            printf("You lose!");
            *chips -= chip;
        }
        else
        {
            do
            {
                printf("\nPress 'r' and hit enter for your next roll.\n");
                scanf(" %c", &r);
                if (r == 'r')
                {
                    dic = random();
                    printf("You rolled a %d.", dic);
                }
                if (dic == di)
                {
                    printf("You win!");
                    *chips += chip;
                }
                else if (dic == 7)
                {
                    printf("Sorry, you lose!");
                    *chips -= chip;
                }
            } while (dic != 7 && dic != di && r == 'r');
        }
    }
}
int arup(int k, int *chips)
{
    char r;
    int di;
    int chip, dic;
    printf("How many chips would you like to bet?");
    scanf("%d", &chip);
    if (chip == 0)
        printf("Sorry, that is not allowed.No game played.");
    else if (chip > *chips)
        printf("Sorry you don't have many chips to bet. No game played.");
    else
    {
        printf("Press 'r' and hit enter for your first roll.\n");
        scanf(" %c", &r);

        if (r == 'r')
        {
            di = random();
            printf("You rolled a %d.", di);
        }
        if (di == 11 || di == 12)
        {
            printf("You win!");
            *chips += chip;
        }
        else if (di == 2)
        {
            printf("You lose!");
            *chips -= chip;
        }
        else
        {
            printf("\nPress 'r' and hit enter for your next roll.\n");
            scanf(" %c", &r);
            if (r == 'r')
            {
                dic = random();
                printf("You rolled a %d.", dic);
            }
            if (dic >= di)
            {
                printf("You win!");
                *chips += chip;
            }
            else
            {
                printf("Sorry, you lose!");
                *chips -= chip;
            }
        }
    }
}
int report(int *money, int *chips)
{
    printf("You currently have %d left and %d chips", *money, *chips);
}
int main()
{
    int op, k, money = 1000, chips = 0;
    do
    {
        printf("\nWelcome to the Casino. Here are your choices: ");
        printf("\n1) Buy chips");
        printf("\n2) Sell chips");
        printf("\n3) Play Craps");
        printf("\n4) Play Arup's Game of Dice");
        printf("\n5) Status Report");
        printf("\n6) Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            buy(&money, &chips);
            break;
        case 2:
            sell(&money, &chips);
            break;
        case 3:
            craps(k, &chips);
            break;
        case 4:
            arup(k, &chips);
            break;
        case 5:
            report(&money, &chips);
            break;
        }
    } while (0 < op && op < 6);
}