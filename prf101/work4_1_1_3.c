//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
int main()
{
    double x = 3.2, y = 5.1;
    double *p1 = &x;
    double *p2 = &y;
    *p1 += 3 - 2 * (*p2);
    printf("x=%lf\n", x);
    *p2 -= 3 * (*p1);
    printf("y=%lf\n", y);
    printf("%lf", x + y);
    getch();
    return 0;
}