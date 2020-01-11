//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include<conio.h>
int main(){
    int d;
    char c1,c2,t,c;
    printf("c1=");
    scanf(" %c",&c1);
    printf("c2=");
    scanf(" %c",&c2);
     if (c1 > c2 ) 
     {
          t = c1; c1 = c2;  c2= t;
     }
     d = c2 - c1; 
     printf("Difference: %d\n",d);
     for (c=c1+1;c<c2;c++)
     printf ("%c : %d, %o, %X\n", c, c, c, c);
     getch();
     return 0;
     }
