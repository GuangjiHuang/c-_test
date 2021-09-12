#include<stdio.h>

int main()
{
    // try to print the macro that the preprocessor had been defined
    // __FILE__, __DATE__, __TIME__, __LINE__, 
    printf("the file's name is: %s\n", __FILE__);
    printf("the current date is: %s\n", __DATE__);
    printf("the current time is: %s\n", __TIME__);
    printf("the file's lines is: %d\n", __LINE__);
    printf("ASNI: %d\n", __STDC__);
    return 0;
} 

