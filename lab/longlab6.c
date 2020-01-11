#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define LINE 1000
#define LETTER 10
int main()
{
    char line[LINE][LETTER];
    char fname[20];
    FILE *fptr = NULL;
    int i = 0;
    int tot = 0;
    printf("What the file stores the puzzle words about animals?\n");
    scanf("%s", fname);

    fptr = fopen(fname, "r");
    while (fgets(line[i], LINE, fptr))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;

    char play[5];
    do
    {
        srand(time(NULL));
        int random = rand() % tot;
        int N = strlen(line[random]);
        int mask[N];
        for (int i = 0; i < N; ++i)
            mask[i] = 0;
        int gameover = 0, count = 0;
        while (!gameover)
        {
            printf("\nHere is your puzzle:\n ");
            for (int j = 0; j < N; ++j)
                if (mask[j])
                    printf("%c", line[random][j]);
                else
                    printf("_ ");
            printf("\n");

            char guess;
            printf("Please enter your guess.\n");
            fflush(stdout);
            scanf(" %c", &guess);
            int check = 0;
            for (int k = 0; k < N; ++k)
                if (line[random][k] == guess)
                {
                    mask[k] = 1;
                    check++;
                }
            if (check > 0)
            {
                printf("Congratulations, you guessed a letter in the puzzle!");
                check = 0;
            }
            else
            {
                printf("Sorry, that letter is NOT in the puzzle.\nYou currently have %d incorrect guesses", count);
                count++;
            }
            gameover = 1;
            for (int m = 0; m < N; ++m)
            {
                if (!mask[m])
                {
                    gameover = 0;
                    break;
                }
            }
            if (count > 5)
            {
                printf(", you lose.\n");
                break;
            }
        }
        if (count < 5)
            printf("\nCongratulations, you got the correct word, \"%s\".\n", line[random]);
        printf("----------------------------------------");
        printf("\n\nWould you like to play hangman (yes,no)?\n");
        fflush(stdin);
        gets(play);
    } while (strcmp(play, "yes") == 0);
    getch();
    return 0;
}