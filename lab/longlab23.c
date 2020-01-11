#include <stdio.h>
#include <string.h>
#include <conio.h>

char *my_strcat(char *destination, const char *source)
{
    char *ptr = destination + strlen(destination);
    while (*source != '\0')
        *ptr++ = *source++;
    *ptr = '\0';
    return destination;
}

int my_strcmp(const char *X, const char *Y)
{
    while (*X)
    {
        if (*X != *Y)
            break;
        X++;
        Y++;
    }
    return *(const unsigned char *)X - *(const unsigned char *)Y;
}

void my_strcpy(char d[], char s[])
{
    int c = 0;
    while (s[c] != '\0')
    {
        d[c] = s[c];
        c++;
    }
    d[c] = '\0';
}

char *my_strncpy(char *s1, const char *s2, size_t num)
{
    if (s1 == NULL)
        return NULL;
    char *ptr = s1;
    while (*s2 && num--)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return ptr;
}

char *my_strstr(char *str, char *substr)
{
    while (*str)
    {
        char *Begin = str;
        char *pattern = substr;
        while (*str && *pattern && *str == *pattern)
        {
            str++;
            pattern++;
        }
        if (!*pattern)
            return Begin;

        str = Begin + 1;
    }
    return NULL;
}

void *my_strnset(char *str, int c, size_t num)
{
    int i;
    char *ptr = str;
    for (i = 0; i < num; i++)
        ptr[i] = c;
    return ptr;
}

char *my_strchr(register const char *s, int c)
{
    do
    {
        if (*s == c)
        {
            return (char *)s;
        }
    } while (*s++);
    return (0);
}

int main()
{
    int i, j;
    char s1[10] = "This is ";
    char s2[20] = "my university";
    printf("s1: %s\ns2: %s\n", s1, s2);
    printf("mystrcat(s1,s2)\n");
    my_strcat(s1, s2);
    printf("After concatenation: %s", s1);

    printf("\n******\n");
    printf("s1: %s\ns2: %s\n", s1, s2);
    printf("mystrcmp(s1,s2)\n");
    int ret = my_strcmp(s1, s2);
    if (ret > 0)
        printf("s1 is greater than s2");
    else if (ret < 0)
        printf("s2 is less than s1");
    else
        printf("s1 is equal to s2");

    printf("\n******\n");
    printf("mystrcpy(s1,s2)\n");
    my_strcpy(s1, s2);
    printf("s1: %s\ns2: %s\n", s1, s2);

    printf("\n******\n");
    printf("mystrncpy(s1,\"I love you\",7)\n");
    my_strncpy(s1, "I love you", 7);
    printf("s1: %s\n", s1);

    printf("\n******\n");
    printf("mystrnset(s1,'*',3)\n");
    my_strnset(s1, '*', 3);
    printf("s1: %s\n", s1);

    printf("\n******\n");
    char str1[30] = "My name is Nhan";
    char str2[10] = "Nhan";
    printf("str1: %s\nstr2: %s\n", str1, str2);
    printf("mystrstr(str1,str2)\n");
    printf("substring: %s\n", my_strstr(str1, str2));

    printf("\n******\n");
    printf("mystrchr(str1,'i')\n");
    printf("string after 'i': %s\n", my_strchr(str1, 'i'));
    getch();
    return 0;
}