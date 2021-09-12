#include<stdio.h>

int main()
{
    // open the file
    FILE *fp = NULL;
    fp = fopen("main_1.c", "r");
    if (fp == NULL)
        printf("File opening error\n");
    else
        printf("File opening success\n");
    // read the file's content
    int data;
    while((data = fgetc(fp)) != EOF)
    {
        //if (data != 10) // checking for  new line
        //    printf("%d %c ,", data, (char)data);
        //else
        //    printf("\n");
        printf("%c", (char)data);
    }

    // close the file
    int res = fclose(fp);
    if (res == 0)
        printf("File closed\n");
    else
        printf("Unable to close file\n");
    return 0;
}




