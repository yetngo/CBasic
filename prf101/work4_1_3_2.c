//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
void T(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
int main()
{
    int a = 7, b = 6;
    T(&a, &b);
    printf("a=%d,b=%d", a, b);
    getch();
    return 0;
}