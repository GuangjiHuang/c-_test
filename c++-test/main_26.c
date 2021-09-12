#include<stdio.h>
#include<malloc.h>
int getline(char *, int);
int main()
{
    char *str = (char *)malloc(100*sizeof(char));
    //char str[100];
    int c;
    int i = 0;
    while((c=getchar()) != EOF)
    {
        str[i++] = c;
    }
    str[i] = '\0';
    printf("\nthe str is: %s", str);
    return 0;
}

int getline(char *s, int lim)
{
    int c, i;
    i = 0;
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}



