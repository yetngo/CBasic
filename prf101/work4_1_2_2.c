//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 260, *p = &n;
    printf("n=%d\n", n);
    char *pp = (char *)p;
    *pp = 0;
    printf("n=%d\n", n);
    getch();
    return 0;
}