//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int x,y;
    
    do
    {
        printf("x=");
        scanf("%d",&x);
        printf("y=");
        scanf("%d",&y);
        int t=x;
        x=y;
        y=t;
        printf("x=%d,y=%d\n",x,y);
    }
    while ((x!=0)&&(y!=0));
    getch();
    return 0;
}