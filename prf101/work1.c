//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include<conio.h>
int n= 9;
double x= 2.35;
char cl= ' a';
int main()
{
    int m= 33;
    short s= 1;
    long L= 5000;
    float y= 1.75;
    printf ("code of main:%u\n", &main);
    printf("variable n, at addr:%u, value: %d, memory size:%d\n",&n,n, sizeof(n));
    printf("variable x, at addr:%u, value: %lf, memory size:%d\n",&x,x, sizeof(x));
    printf("variable cl, at addr:%u, value: %c, memory size:%d\n", &cl,cl, sizeof(cl));
    printf("variable m, at addr:%u, value: %d, memory size:%d\n",&m,m, sizeof(m));
    printf("variable s, at addr:%u, value: %hi, memory size:%d\n",&s,s, sizeof(s));
    printf("variable L, at addr:%u, value: %ld, memory size:%d\n",&L,L, sizeof(L));
    printf("variable y, at addr:%u, value: %f, memory size:%d\n",&y,y, sizeof(y));
    getch();
    return 0;
}