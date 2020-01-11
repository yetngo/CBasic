#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100


void Add(char[][30], int*), Remove(char[][30], int*), Search(char[][30], int*), Print(char[][30], int*); 


int main()  {
    char StudentList[MAX][30];
    int n=0;
    int iOption=0;
    do {
        system("cls");
        printf("\n******* MENU *******\n");
        printf("1: Add\n");
        printf("2: Remove\n");
        printf("3: Search\n");
        printf("4: Print by name\n");
        printf("5: Quit\n");
        printf("********************\n\n");
        printf("What do you want? ");
        scanf("%d",&iOption);
        fflush(stdin);
        switch (iOption) {
            case 1: Add(StudentList, &n);       break;
            case 2: Remove(StudentList, &n);    break;
            case 3: Search(StudentList, &n);    break;
            case 4: Print(StudentList, &n);     break;
            case 5: printf("Turning off!\n");   break;
            default: printf("Fail! Again!\n\n");
        }
        system("pause");
    }while(iOption!=5);
    return 0;
}

//======================================================================//


void Add(char StudentList[][30], int *n)    {
    int stt=0;
    printf("Add new students\n");
    printf("Press Enter to out\n\n");
    do {
        fflush(stdin);
        printf("Add student %d's name: ", *n+1);
        gets(StudentList[*n]);
        if (*StudentList[*n]!='\0') 
            *n+=1;
        else stt=1;
    } while (stt==0);
}

void Remove(char StudentList[][30], int *n)    {
    int y;
    char x[2];\
    fflush(stdin);
    printf("\nStudent List:\n\n");
    for (int i=0; i<*n; i+=1)
        printf("%d: %s\n",i+1,StudentList[i]);
    
    printf("\nPress student's number to remove:\n");
    scanf("%d",&y);
    
    *StudentList[y-1]='\0';
    *n-=1;
    for (int i=y-1; i<*n; i+=1)
        strcpy(StudentList[i], StudentList[i+1]);
    // StudentList[*n-1][0]='\0';
    printf("\nRemoved\n\n");
    for (int i=0; i<*n; i+=1)
        printf("%d: %s\n",i+1,StudentList[i]);
}

//======================================================================//


void Search(char StudentList[][30], int *n)    {
    char name[30];
    printf("Seach name: ");
    gets(name);
    for (int i=0; i<*n; i+=1)
        if (strcmp(name, StudentList[i])==0)
            printf("\n%d: %s\n\n", i+1, StudentList[i]);
}

//======================================================================//


void Print(char StudentList[][30], int *n)    {
    char x[30];
    for (int i=0; i<*n; i+=1)   
        for (int j=0; j<*n; j+=1)   
            if (strcmp(StudentList[i], StudentList[j])==-1) {
                strcpy(x,StudentList[i]);
                strcpy(StudentList[i],StudentList[j]);
                strcpy(StudentList[j],x);
                j=0;
            }
    for (int i=0; i<*n; i+=1)
        puts(StudentList[i]);
}