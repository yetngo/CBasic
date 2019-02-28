#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("nhap so");
    scanf("%d",&n);
    if (0<=n && n<=6)
    {
        if (n==0) printf("The weekday is: Sunday");
        else if (n==1) printf("The weekday is: Monday");
        else if (n==2) printf("The weekday is: Tuesday");
        else if (n==3) printf("The weekday is: Wednesday");
        else if (n==4) printf("The weekday is: Thursday");
        else if (n==5) printf("The weekday is: Friday");
        else if (n==6) printf("The weekday is: Saturday");
    }
    else printf("false");
    getch();
    return 0;
}