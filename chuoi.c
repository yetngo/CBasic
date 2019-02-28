#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n,i=0;
    char a[]="nhanahanha";
    n=strlen(a)-1;
    while(n>1)
    {
        if (a[i]!=a[n-i])
        {
            printf("chuoi k dx");
            getch();
            return 1;
        }  
    i++;
    } 
    printf("chuoi dx");
    getch();
    return 0;
}