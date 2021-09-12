#include<iostream>
using namespace std;

int glo_a = 3;
char glo_s[] = "hello, world!";
int main()
{
    char *s1 = "hello, world!";
    char s2[] = "hello, world!";

    const int a = 2;

    const char c = 'n';

    int d = 3;

    // print the id adress of them
    printf("the id of the s1 is: %p", s1);
    printf("\n");
    printf("the id of the a is: %p", &a);
    printf("\n");
    printf("the id of the c is: %p", &c);
    printf("\n");
    printf("the id of the d is: %p", &d);
    printf("\n");
    printf("the id of the glo_a is: %p", &glo_a);
    printf("\n");
    printf("the id of the s2 is: %p", s2);
    printf("\n");
    printf("the id of the glo_s is: %p", glo_s);
    printf("\n");
    return 0;
}
