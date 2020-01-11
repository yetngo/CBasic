#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char file[30];
    char buffer[600000];
    printf("Enter file name to save content: ");
    gets(file);
    FILE *fp;
    fp = fopen(file, "a+");
    char content[100];
    printf("Enter content: ");
    fflush(stdin);
    gets(content);
    fwrite(content, 1, strlen(content), fp);
    fclose(fp);
    fp = fopen(file, "r");
    fread(buffer, 1, 600000, fp);
    printf("File content:\n%s", buffer);
    fclose(fp);
    getch();
    return 0;
}