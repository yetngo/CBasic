#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   int i,n;
   printf("n=");
   scanf("%d",&n);
   if (n<2) printf("This is not a prime number");
   else
   for(i=2; i<=sqrt(n); i++)
   {
       if (n%i==0) 
       {
           printf("This is not a prime number");
           getch();
           return 0;
       }
   }
   printf("This is a prime number");
   getch();
   return 0;
}
