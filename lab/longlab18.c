#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dirent.h>

int main()
{
    FILE *fp1, *fp2, *fp3, *fp4, *fp5, *fp6;
    char rfile[30], cfile[30], tfile[30], ffile[30], sfile[30], result[30], dfile[30];
    struct dirent *de;
    DIR *dr = opendir(".");
    printf("1) Read file");
    printf("\n2) Copy files");
    printf("\n3) Merge two files");
    printf("\n4) List files in a directory");
    printf("\nDelete file");
    int op;
    do
    {
        printf("\n\nChoice features: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the name of file you wish to see: ");
            fflush(stdin);
            gets(rfile);
            char buffer1[600000];
            fp1 = fopen(rfile, "r");
            if (fp1 != NULL)
            {
                fread(buffer1, 1, 600000, fp1);
                fclose(fp1);
                printf("\n%s", buffer1);
            }
            else
                printf("File Not Found!");
            break;
        case 2:
            printf("Enter the name of file to copy: ");
            fflush(stdin);
            gets(cfile);
            printf("Enter the name of target file: ");
            fflush(stdin);
            gets(tfile);
            char buffer2[600000];
            fp2 = fopen(cfile, "r");
            if (fp2 != NULL)
            {
                fread(buffer2, 1, 600000, fp2);
                fclose(fp2);
            }
            fp3 = fopen(tfile, "a+");
            fwrite(buffer2, 1, strlen(buffer2), fp3);
            fclose(fp3);
            printf("File copied successfully!!");
            break;
        case 3:
            printf("Enter the name of first file: ");
            fflush(stdin);
            gets(ffile);
            printf("Enter the name of second file: ");
            fflush(stdin);
            gets(sfile);
            printf("Enter the name of file which will store contents of two files:");
            fflush(stdin);
            gets(result);
            FILE *fp4 = fopen(ffile, "r");
            FILE *fp5 = fopen(sfile, "r");
            FILE *fp6 = fopen(result, "w");
            char c;
            while ((c = fgetc(fp4)) != EOF)
                fputc(c, fp6);
            while ((c = fgetc(fp5)) != EOF)
                fputc(c, fp6);
            fclose(fp4);
            fclose(fp5);
            fclose(fp6);
            printf("Two file were merges into %s file successfully!!", result);
            break;
        case 4:
            
            if (dr == NULL)
                printf("Could not open current directory");
            while ((de = readdir(dr)) != NULL)
                printf("%s\n", de->d_name);
            closedir(dr);
            break;
        case 5:
            printf("Enter the name of file you wish to delete: ");
            fflush(stdin);
            gets(dfile);
            if (remove(dfile) == 0)
                printf("Deleted successfully");
            else
                printf("Unable to delete the file");

            break;
        }
    }while(op>0&&op<6);
}