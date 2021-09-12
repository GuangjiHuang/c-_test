#include<stdio.h>
// the declaration of the function
//extern "C" void foo(); // use the c-like way to compile the function that creat the c-like symbol(that you can use the nm to show the symbol);
void foo(); 

void foo()
{
    printf("hello, world!\n");
    printf("this is the %s\n", __FUNCTION__);
}
