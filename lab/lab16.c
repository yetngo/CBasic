#include <stdio.h>
#include <conio.h>
int main()
{
    int month = 1;
    double annual, monthly;
    double payment, mortgage;
    printf("What is the value left on the mortgage?");
    scanf("%lf", &mortgage);
    printf("What is the annual interestrate of the loan, in percent?");
    scanf("%lf", &annual);
    monthly = annual / 1200;
    printf("What is the monthly payment?");
    scanf("%lf", &payment);

    if (payment <= mortgage * monthly)
        printf("Not enought payment!!");
    else
    {
        printf("\nMonth\tPayment\tAmount Owed");
        do
        {
            if (mortgage >= payment)
            {
                mortgage = mortgage * (1 + monthly) - payment;
                printf("\n%d\t%.2lf\t%.2lf", month, payment, mortgage);
            }
            else
            {
                mortgage *= (1 + monthly);
                printf("\n%d\t%.2lf\t0", month, mortgage);
                mortgage = 0;
            }
            month++;
        } while (mortgage != 0);
    }
    getch();
    return 0;
}