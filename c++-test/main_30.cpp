#include<iostream>
using namespace std;
int main()
{
    // the string 
    char *s1 = "hello, world!";

    char s2[] = "hello, world";

    s1 = "nihao";

    cout << *s1 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}

