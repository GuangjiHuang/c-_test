#include<stdio.h>

int main()
{
    // the string 
    char *s1 = "hello, world!";
    // use the pointer to change the string
    //*s1 = 'n';

    char s2[] = "hello, world";
    *s2 = 'n';

    s1 = "nihao";


    printf("%s", s1++);
    printf("\n");
    printf("%c", *s1);
    printf("\n");
    printf("%s\n", s2);
    printf("the sizeof the var of the s1 is the: %d\n", sizeof s1);
    printf("the sizeof the var of the s2 is the: %d\n", sizeof s2);
    printf("the poiter of the s1 is: %p\n", s1);
    printf("the poiter of the s2 is: %p\n", s2);

    return 0;
}

