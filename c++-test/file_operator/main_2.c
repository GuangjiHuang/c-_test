#include<stdio.h>
#include<malloc.h>
#define BUFFER 100
int main()
{
    FILE *fp;
    int res;
    char *str = NULL;
    unsigned char chr;
    int fpos;
    fp = fopen("test.txt", "r");
    if (fp == NULL)
        printf("File opening error\n");
    else
        printf("File opening success\n");
    str = (char*)malloc(BUFFER * sizeof(char));
    fpos = ftell(fp);
    printf("File pointer pos before reading = %p\n", fpos);
    if (fgets(str, BUFFER, fp))
        printf("%s \n", str);
    else
        printf("Line reading failure\n");
    fpos = ftell(fp);
    printf("File pointer pos after reading = %p\n", fpos);
    res = fclose(fp);
    if (res == 0)
        printf("file closed\n");
    else
        printf("Unable to close file\n");
    return 0;
}


