#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, h, p, s;
    printf("Nhap vao so giay");
    scanf("%d",&n);
    if(n>=0 && n<86399)
    {
        int k;
        h=n/3600;
        k=h;
        p=(n%3600)/60; 
        s=(n%3600)%60;
        printf("Kq %02d : %02d : %02d",h,p,s);
    }
    else printf("ko co kq %d",k);
    getch();
    return 0;
}