#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int b,c;
    printf("nhap thang nam");
    scanf("%d %d",&b,&c);
    if ((b<=12)&&(b>=0))
    {
        if ((b==1)||(b==2)||(b==3)||(b==4)) printf("quy 1");
        else
        if ((b==5)||(b==6)||(b==7)||(b==8)) printf("quy 2");
        else printf("quy 3");
    
        if ((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12)) printf("thang co 31 ngay");
        else
        if ((b==4)||(b==6)||(b==9)||(b==11)) printf("thang co 30 ngay");
        else
        {
            if ((c%4==0) && (c%100!=0)) printf("thang co 29 ngay");
            else printf("thang co 28 ngay");
        }
    }
    else printf("loi");
    getch();
    return 0;
}