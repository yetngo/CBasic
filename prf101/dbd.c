#include <stdio.h>
#include <conio.h>
#include <math.h>
int checkPositiveIntegers(char str[]) {
    char *ptr = str;
    if (*ptr == '-' || *ptr == '0') //checks for negative numbers or zero
        return 1;
    else {
        do {
            if (isdigit(*ptr) == 0) { //checks for non-digit at ptr location; isdigit() returns 0 if non-digit
                return 1;
                break;
            }
            ptr++;
        } while (*ptr != '\0' && *ptr != '\n');
        return 0; //returns 0 if positive integer
    }
}
 int main ()
{
int k;
printf("Please enter Box size:\n\n");
scanf("%d",&k);

    getch();
    return 0;
}
