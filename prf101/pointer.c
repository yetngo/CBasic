#include <stdio.h>
void swap(int &a,int &b);

main()
{
    int a=5,b=7;
    printf("\ntrc swap(): a=%d, b=%d",a,b);
    swap(a, b);
    printf("\ntrc swap(): a=%d, b=%d",a,b);
    getch();
    return 0;
}