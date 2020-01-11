#include <stdio.h>
#include <time.h>
#include <conio.h>
int main()
{
    int turn = 0, i, j,start=0;
    int slot[4], guess[4];
    clock_t begin;
    srand(time(NULL));
    printf("Welcome to MasterMine!!!\n");
    printf("\nAt each turn, you will enter your guess for the playing board.");
    printf("\nA valid guess 4 values in between 0 and 5.");
    printf("\nEach guess will have each number within the guess separated by a space.");
    printf("\nWhen you are ready, enter your first guess.");
    printf("\nFrom that point on, you will be told how many perfect and imperfect matches you have.");
    printf("\nAfter this message, you should guess again. You have 10 chances, good luck!\n");

    for (i = 0; i < 4; i++)
        slot[i] = rand() % 6;

    while (1)
    {
        int checkSlot[4] = {1, 1, 1, 1}, checkGuess[4] = {1, 1, 1, 1};
        int perfect = 0;
        int imperfect = 0;
        scanf("%d %d %d %d", &guess[0], &guess[1], &guess[2], &guess[3]);
        if (start == 0)
        {
            begin = clock();
            start = 1;
        }
        for (i = 0; i < 4; i++)
        {
            if (guess[i] == slot[i])
            {
                perfect++;
                checkSlot[i] = checkGuess[i] = 0;
            }
        }
        for (i = 0; i < 4; i++)
            for (j = 0; j < 4; j++)
                if (guess[i] == slot[j] && checkGuess[i] == 1 && checkSlot[j] == 1 && i != j)
                {
                    imperfect++;
                    checkGuess[i] = checkSlot[j] = 0;
                }
        turn++;
        printf("\nYou have %d perfect matches and %d imperfect matches.\n", perfect, imperfect);
        if (perfect == 4)
        {
            printf("\nYou won the games in %d and %d:%d!", turn, (((clock() - begin) / CLOCKS_PER_SEC) / 60), (((clock() - begin) / CLOCKS_PER_SEC) % 60));
            break;
        }
        if (turn == 10)
        {
            printf("\nYou lose ! The code is : ");
            for (i = 0; i < 4; i++)
            {
                printf("%d ", slot[i]);
            }
            break;
        }
    }
    getch();
    return 0;
}
