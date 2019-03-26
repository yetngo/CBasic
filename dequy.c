#include <stdio.h>
#include <stdlib.h>

int Tich(int n)
{ 
    if (n==1)
    return 1;
    else return n*Tich(n-1);
}
int main()
{
    int n; 
    printf("nhap n=");
    scanf("%d",&n);
    printf("%d",Tich(n));
    getchar();
    getchar();
    return 0;
}
    