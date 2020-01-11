#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void one(int digit)
{
    switch (digit)
    {
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
    }
}

void two(int digit)
{
    switch (digit)
    {
    case 0:
        printf("ten ");
        break;
    case 1:
        printf("eleven ");
        break;
    case 2:
        printf("twelve ");
        break;
    case 3:
        printf("thirteen ");
        break;
    case 4:
        printf("fourteen ");
        break;
    case 5:
        printf("fifteen ");
        break;
    case 6:
        printf("sixteen ");
        break;
    case 7:
        printf("seventeen ");
        break;
    case 8:
        printf("eighteen ");
        break;
    case 9:
        printf("nineteen ");
    }
}

void ten(int digit)
{
    switch (digit)
    {
    case 2:
        printf("twenty ");
        break;
    case 3:
        printf("thirty ");
        break;
    case 4:
        printf("forty ");
        break;
    case 5:
        printf("fifty ");
        break;
    case 6:
        printf("sixty ");
        break;
    case 7:
        printf("seventy ");
        break;
    case 8:
        printf("eighty ");
        break;
    case 9:
        printf("ninty ");
    }
}

void main()
{
    int key;
    do
    {
        long num, div, n1;
        int flag, digit, pos, tot_dig;
        do
        {
            printf("\nEnter a number: ");
            scanf("%ld", &num);
            if (num > 99999)
                printf("please enter a number between 0 and 99999\n");
        } while (0 > num || num > 99999);
        //0
        if (num == 0)
            printf("Zero\n");
        // count the digits of the number
        tot_dig = 0; //total digit =0
        div = 1;
        n1 = num;

        while (n1 > 9)
        {
            n1 = n1 / 10;
            div = div * 10;
            tot_dig++;
        }

        tot_dig++;
        pos = tot_dig;
        //convert number to words
        while (num != 0)
        {
            digit = num / div;
            num = num % div;
            div = div / 10;
            switch (pos)
            {//tens and tens thousand
            case 2:
            case 5:
                if (digit == 1)
                    flag = 1;
                else
                {
                    flag = 0;
                    ten(digit);
                }
                break;
            //unit and thousands
            case 1:
            case 4:
                if (flag == 1)
                {
                    flag = 0;
                    two(digit);
                }
                else
                    one(digit);

                if (pos == 4)
                    printf("thousand ");
                break;
            //hundred
            case 3:
                if (digit > 0)
                {
                    one(digit);
                    printf("hundred ");
                }
                break;
            }
            pos--;
        }
        //10xxx
        if (pos == 4 && flag == 0)
            printf("thousand");
        else if (pos == 4 && flag == 1)
            printf("ten thousand");
        //10
        if (pos == 1 && flag == 1)
            printf("ten ");
        key = getch();
    } while (key != 27);
    getch();
}
