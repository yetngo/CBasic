#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char name[25];
    printf("Enter your name ");
    gets(name);
    printf("%s is a member of FU-Dever!",name);
    getchar();
    return 0;
}