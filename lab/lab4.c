#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
   char str[100];
   int i, len, max = 0;
   int count[26];

   printf("Enter any string: ");
   gets(str);

   len = strlen(str);

   //Initialize frequency of each character to 0
   for (i = 0; i < 26; i++)
      count[i] = 0;

   //Downcase string
   tolower(str);

   //Find total number of occurrences of each character
   for (i = 0; i < len; i++)
      count[str[i] - 97]++;

   printf("\nFrequency of all characters in the given string: \n");
   for (i = 0; i < 26; i++)
   {
      if (count[i] != 0)
         printf("'%c' = %d\n", (i + 97), count[i]);
      if (count[i] > max)
         max = count[i];
   }

   printf("\nThe character that appears the most in the string:\n");
   for (i = 0; i < len; i++)
      if (count[i] == max)
         printf("'%c' = %d\n", (i + 97), count[i]);

   getch();
   return 0;
}