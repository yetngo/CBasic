#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define pi 3.14
int main(int argc, char const *argv[])
{
    float r;
    printf("ban kinh =");
    scanf("%f",&r);
    printf("chu vi =%10.2f\n",2*r*pi); 
    printf("dien tich =%10.2f\n",pi*r*r);
    printf("the tich =%10.2f",(float)(4/3)*pi*r*r*r); 
    getch();
    return 0;
}