//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
int main()
{
    char c1 = 'A', c2 = 'F';
    char *p1 = &c1;
    char *p2 = &c2;
    *p1 += 3;
    printf("c1=%c", c1);
    *p2 -= 5;
    printf("c2=%c", c2);
    printf("%d", c1 - c2);
    getch();
    return 0;
}