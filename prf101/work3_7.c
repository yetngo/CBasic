//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>

int sumDigits(int n)
{
   int sum = 0; /* initialize sum of digits */
   do
   {
      int remainder = n % 10; /* Get a digit at unit position */
      n = n / 10;
      sum += remainder;
   } while (n > 0);
   return sum;
}

int main()
{
   int S = 0, n;
   do
   {
      printf("n=");
      scanf("%d", &n);
      if (n >= 0)
      {
         S = sumDigits(n);
         printf("%d\n", S);
      }
   } while (n >= 0);
   getch();
   return 0;
}