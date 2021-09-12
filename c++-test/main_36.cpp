#include<stdio.h>
void read();
int main()
{
    read();
    return 0;
}
void read()
{
    char str[20];
    gets(str);
    printf("%s\n", str);
    return;
}
