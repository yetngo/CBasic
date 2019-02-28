#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n,m,x=1,newnumber=0;
    printf("nhap n: ");
        scanf("%d", &n);
    while ((n/(10*x))>=1) x=x*10;
    /* ko bt giải thích
    vd: n=2345 thì x=1000 */
    while (n>0)
    {
        m=n%10;// m là chữ số cuối cùng của n
        newnumber=newnumber+m*x;//tổng cuối cùng sẽ được số ngược lại của n
        n=n/10;// bỏ chữ số cuối cùng của n
        x=x/10;// bỏ chữ số 0 cuối cùng của x
    } 
    printf("newnumber= %d",newnumber);
    getch();
    return 0;
}