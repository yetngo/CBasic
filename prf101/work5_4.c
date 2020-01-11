//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
#include <math.h>

int quadratic_equation(int a, int b, int c)
{
    float delta;
    delta = b * b - a * a * c;
    if (delta < 0)
        printf("No solution");
    else if (delta == 0)
        printf("x=%10.2f\n", (float)(-b / (2 * a)));
    else
        printf("x1=%10.2f ; x2=%10.2f", (float)((-b + sqrt(delta)) / (2 * a)), (float)((-b - sqrt(delta)) / (2 * a)));
}

int bank_deposit(int d, float r, int n)
{
    float p = d * powf((1 + r), n);
    printf("Amount at the %d(th) year: %f", n, p);
}

int main()
{
    int choice, n;
    do
    {
        printf("\n1-Quadratic equation\n");
        printf("2-Bank deposit problem\n");
        printf("3-Select an operation:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int a, b, c;
            printf("Input a,b,c (a>0)\n");
            do
            {
                printf("a=");
                scanf("%d", &a);
                printf("b=");
                scanf("%d", &b);
                printf("c=");
                scanf("%d", &c);
            } while (a == 0);
            quadratic_equation(a, b, c);
        }
        break;
        case 2:
        {
            int d, n;
            float r;
            printf("Input deposit( d>0), yearly rate( 0<r<0.1), number of years (n>0)\n");
            do
            {
                printf("Deposit=");
                fflush(stdin);
                scanf("%d", &d);
            } while (d <= 0);
            do
            {
                printf("Yearly rate=");
                scanf("%f", &r);
            } while ((r <= 0.0) || (r >= 1.0));
            do
            {
                printf("Number of year=");
                scanf("%d", &n);
            } while (n <= 0);
            bank_deposit(d, r, n);
        }
        break;
        }
    } while ((choice > 0) && (choice < 3));
    getch();
    return 0;
}