#include <stdio.h>
#include <conio.h>
#include <math.h>
int prime(int n)
{
    int m = sqrt(n);
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= m; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int isFibonacci(int n)
{
    int t1 = 1, t2 = 1, f = 1;
    if (n == 1)
        return 1;
    while (f < n)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return n == f;
}
int sumDigits(int n)
{
    int sum = 0;
    do
    {
        int remainder = n % 10;
        n = n / 10;
        sum += remainder;
    } while (n > 0);
    return sum;
}
int main()
{
    int op, i;
    int numPrimes, numTest, n;
    printf("\n1-The first primes");
    printf("\n2-Fibonacci element");
    printf("\n3-Sum of digits");
    do
    {
        printf("\nChoose an option: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Number of primes: ");
            scanf("%d", &numPrimes);
            i = 2;
            int count = 0;
            while (count < numPrimes)
            {
                if (prime(i) == 1)
                {
                    printf("%d ", i);
                    count++;
                }
                i++;
            }
            break;
        case 2:
            do
            {
                printf("Number tested: ");
                scanf("%d", &numTest);
            } while (numTest < 1);
            if (isFibonacci(numTest) == 1)
                printf("It is a Fibonacci term.");
            else
                printf("It is not a Fibonacci term.");
            break;
        case 3:
            do
            {
                printf("Enter an integer: ");
                scanf("%d", &n);
            } while (n < 0);
            printf("Sum of it's digits: %d\n", sumDigits(n));
            break;
        }
    } while (op > 0 && op < 4);
    getch();
    return 0;
}