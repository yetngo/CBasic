//Le Thi Thanh Nhan
//DE140100
//SE1402
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main()
{
    int nV=0,nC=0,nO=-1;
    char ch;
    printf("inputted character ");
    do
    {
        ch = getchar();
        ch = toupper(ch);
        if ((ch>='A')&&(ch<='Z'))
        {
        switch (ch) {
         case 'A':
         case 'E' :
         case 'I' :
         case 'O' :
         case 'U' : nV ++;
          break;
         default:  nC++;
            }
            }
        else nO++;
    }
    while (ch!='\n');
    printf("The number of vowels: %d\n", nV);
    printf("The number of consonants: %d\n", nC);
    printf("The number of others: %d", nO);
    getch();
    return 0;
}