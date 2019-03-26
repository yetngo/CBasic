#include <stdio.h>
#include <stdlib.h>

int fibonacy(int n)
{ 
    if (n<3)
    return 1;
    else return fibonacy(n-1)+fibonacy(n-2);
}
int main()
{
    int n; 
    printf("nhap n=");
    scanf("%d",&n);
    printf("%d",fibonacy(n));
    getchar();
    getchar();
    return 0;
}
    