#include<stdio.h>

int main()
{
#ifdef __cplusplus
    printf("the compiler is the g++, and the __cplusplus is: %d\n", __cplusplus);

#else
    printf("the compiler is the gcc\n");
#endif 

    return 0;
} 
