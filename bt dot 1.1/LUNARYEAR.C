#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n;
    char chi[12][12]={ "Than","Dau", "Tuat", "Hoi","Ty", "Suu","Dan", "Mao","Thin", "Ty.", "Ngo","Mui"},
         can[10][10]={"Canh","Tan", "Nham", "Quy","Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
    printf("nam: ");
    scanf("%d",&n);
    printf("%s %s",can[n%10], chi[n%12]);
    getch();
    return 0;
}