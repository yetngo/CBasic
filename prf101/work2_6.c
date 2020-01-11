//Le Thi Thanh Nhan
//DE140100
//SE1402
#include <stdio.h>
#include<conio.h>
int main()
{
    int code;
    char ch;
    for (code = 0; code <= 255; code++)
    {
        printf("%c : %d    %o: %X\n", code, code, code, code);
        if ((code != 0) && (code % 20 == 0))
            getchar();
    }
    getch();
    return 0;
}
 