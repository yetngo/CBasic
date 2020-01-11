//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 7, m = 6;
    int *pn = &n;
    int *pm = &m;
    printf("*pn=%d,*pm=%d,n=%d,m=%d\n", pn, pm, n, m);
    *pn = *pm + 2 * m - 3 * n;
    printf("*pn=%d,*pm=%d,n=%d,m=%d\n", pn, pm, n, m);
    *pm -= *pn;
    printf("*pn=%d,*pm=%d,n=%d,m=%d\n", pn, pm, n, m);
    printf("%d", m + n);
    getch();
    return 0;
}
