/* time: 9.21 - 21:10 - 21:16 *//*{{{*/
/* 
purpose:
1) use the c's function malloc to allocate the memory, if fail to allocate, it would 
not return the exception, but the pointer points to the NULL;
2) use the c++'s function new to allocate the memory, if fail to allocate, it would 
return teh exception: bad_alloc, use the ex.what() to see the result.
3) so recommand to use the new function of the c++.
 *//*}}}*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    for (int i=0; i<100; i++)
    {
        int *ptr_int = (int*)malloc(sizeof(int) * 100000000);
        printf("allocate successfully %d times.", i);
        if (ptr_int != NULL)
            printf("    ok!\n");
        else
            printf("    fail!\n");
    }

    return 0;
}
