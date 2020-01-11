#include <stdio.h>
int main()
{
    int d,m,y,n;

    printf ("Nhap ngay thang nam ");
    scanf("%d%d%d",&d,&m,&y);
    if (m<3)
    {
        m+=12;
        y--;
    }
    n=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(n)
    {
        case 0: printf("\nmonday"); break;
        case 1: printf("\ntuesday"); break;
        case 2: printf("\nwednesday"); break;
        case 3: printf("\nthursday"); break;
        case 4: printf("\nfriday"); break;
        case 5: printf("\nsaturday"); break;
        case 6: printf("\nsunday"); break;
    }
    getch();
    return 0;
}