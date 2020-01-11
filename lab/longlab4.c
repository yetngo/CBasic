#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
typedef char string[100];

typedef struct QuesType
{
    char kind[3];
    int point;
    string ques;
    int numChoices;
    string *choiceList;
    string ans;
} QuesType;

QuesType *ReadFile(string fn, int *n)
{
    FILE *f = fopen(fn, "r");
    fscanf(f, "%d\n", n);
    QuesType *QB = (QuesType *)malloc((*n) * sizeof(QuesType));

    for (int i = 0; i < *n; i++)
    {
        QuesType q;
        fscanf(f, "%s %d\n", q.kind, &q.point);
        fscanf(f, "%[^\n]\n", q.ques);
        if (strcmp(q.kind, "MC") == 0)
        {
            fscanf(f, "%d\n", &q.numChoices);
            q.choiceList = (string *)malloc((q.numChoices) * sizeof(string));
            for (int j = 0; j < q.numChoices; j++)
            {
                fscanf(f, "%[^\n]\n", q.choiceList[j]);
            }
        }
        fscanf(f, "%s\n", q.ans);
        QB[i] = q;
    }

    fclose(f);
    return QB;
}

void playgame(QuesType *QB, int n)
{
    int nQuestion, playerPoint;
    for (;;)
    {
        printf("\nHow many questions would you like (out of 3)?\n");
        scanf("%d", &nQuestion);
        if (nQuestion > n)
            printf("Sorry, that is too many.\n");
        else if (nQuestion == 0)
            exit(0);
        else if (nQuestion < 0)
            printf("Please enter a positive number!\n");
        else
        {
            printf("\n");
            playerPoint = 0;
            int *mark = (int *)malloc(n * sizeof(int));
            int num;
            for (int i = 0; i < nQuestion; i++)
            {
                do
                {
                    num = rand() % n;
                } while (mark[num] == 1);
                mark[num] = 1;
                displayQuestion(QB[num]);
                printf("Your answer: ");
                string answer;
                scanf("%s", answer);
                playerPoint += checkAnswer(QB[num], answer);
            }
            printf("your game is over!\n");
            printf("Your Final Points: %d", playerPoint);
        }
    }
}
int checkAnswer(QuesType Q, string answer)
{
    int point = 0;
    if (strcmp(answer, Q.ans) == 0)
    {
        printf("Correct! You get %d points\n\n", Q.point);
        point += Q.point;
    }
    else
    {
        printf("Incorrect! You lose %d points\n\n", Q.point);
        point -= Q.point;
    }
    return point;
}
void displayQuestion(QuesType Q)
{
    char q[100] = {'A', 'B', 'C', 'D', 'E', 'F'};
    printf("Points: %d\n", Q.point);
    printf("Question: %s\n", Q.ques);
    if (strcmp(Q.kind, "MC") == 0)
    {
        for (int j = 0; j < Q.numChoices; j++)
            printf("%c.%s\n", q[j], Q.choiceList[j]);
    }
}

int main()
{
    QuesType *QuesBank;
    int numQues;
    QuesBank = ReadFile("longlab4.txt", &numQues);
    playgame(QuesBank, numQues);
    getch();
    return 0;
}
