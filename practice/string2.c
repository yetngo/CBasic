#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    char str[100];
    printf("string: ");
    fgets(str, sizeof str, stdin);
    while (str[i]!='\0')
        i++;
    printf ("length=%d",i-1);
    getch();
    return 0;
}