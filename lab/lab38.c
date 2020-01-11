#include <stdio.h>
#include <conio.h>
int main()
{
    char file[30];
    char buffer[600000];
    printf("File name: ");
    gets(file);
    FILE *fp = fopen(file, "r");
    if (fp != NULL)
    {
        fread(buffer, 1, 600000, fp);
        printf("File content:\n%s", buffer);
        fclose(fp);
    }
    else
        printf("File Not Found!");
    getch();
    return 0;
}