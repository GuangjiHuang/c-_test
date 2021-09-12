#include<stdio.h>
// the declaration of the function
extern "C" void foo();
//void foo();

void foo()
{
    printf("hello, world!\n");
    printf("this is the %s\n", __FUNCTION__);
    printf("the file is: %s\n", __FILE__);
}
