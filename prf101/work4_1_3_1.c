//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
int t(int x, int y, int z)
{
    int k = 2 * x + 3 * y + 5 * z;
    return k % 13;
}
int main()
{
    int a = 7, b = 6, c = 5;
    int L = t(a, b, c);
    printf("L=%d", L);
    getch();
    return 0;
}