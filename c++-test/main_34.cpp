#include<iostream>
using namespace std;
int a;
double c = 1.2;
int b = 1;
char str[] = "hello, world!";
int main()
{
    char s2[] = "hello, the world!";
    const char *s1 = "hello, the world!";
    char *s3 = "hello, the world!";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << "about the id adress " << endl;
    printf("the str's id is: %p\n", str);
    printf("the s1's id is: %p\n", s1);
    printf("the s2's id is: %p\n", s2);
    printf("the s3's id is: %p\n", s3);

    return 0;
}
