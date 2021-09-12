#include<ctype.h>
#include<stdio.h>
/* try to check if include the ctype.h use the #define CTYPE_H */
int main()
{
    char s1[] = "ello, world!";
    char *p_s1 = s1;
    while(*(p_s1))
    {
        printf("%c %s the punctuation\n", *p_s1, ispunct(*p_s1)?"is":"is not");
        p_s1++;
    }
    // check if inlcue the CTYPE_H
#if defined(CTYPE_H)
    printf("Has been included the ctype.h\n");
#else
        printf("Has not been included the ctype.h\n");
#endif
    return 0;
}
