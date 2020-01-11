#include <stdio.h>
#include <time.h>
int main()
{
    int chance = 10;
    int slot[5];
    int guess[5];


    srand(time(NULL));
    printf("Welcome to MasterMine!!!\n\n");
    printf("At each turn, you will enter your guess for the playing board.\n");
    printf("A valid guess 4 values in between 0 and 5.\n");
    printf("Each guess will have each number within the guess separated by a space.\n");
    printf("When you are ready, enter your first guess.\n");
    printf("From that point on, you will be told how many perfect and imperfect matches you have.\n");
    printf("After this message, you should guess again. You have 10 chances, good luck!\n");

    for (int i=0; i<4; i++)
    {
        slot[i] = rand()%6;
        //printf("%d ", slot[i]);
    }

    while(1)
    {
        int checkSlot[4] = {1,1,1,1}, checkGuess[4] = {1,1,1,1};
        int perfect = 0;
        int imperfect = 0;
        printf("\nYour turn : ");
        for (int i=0; i<4; i++)
        {
            scanf("%d", &guess[i]);
        }

        for (int i=0; i<4; i++)
        {
            if (guess[i] == slot[i])
            {
                perfect++;
                checkSlot[i] = checkGuess[i] = 0;
            }
        }
        for (int i=0; i<4; i++)
            for (int j=0; j<4; j++)
                if (guess[i] == slot[j] && checkGuess[i] == 1 && checkSlot[j] == 1 && i != j )
                {
                    imperfect++;
                    checkGuess[i] = checkSlot[j] = 0;
                }
                chance--;
        printf("\nPerfect: %d and Imperfect: %d", perfect, imperfect);
        if (perfect == 4)
        {
            printf("\nCongratulation! You won the games!");
            break;
        }
        if (chance == 0)
        {
            printf("\nYou lose ! The code is : ");
            for (int i=0; i<4; i++)
            {
                printf("%d ", slot[i]);
            }
        }
    }

}
