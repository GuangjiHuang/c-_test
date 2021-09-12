#include<iostream>
#include<string>
using namespace std;
int main(int argc, char **argv)
{
    char *ptr_char =NULL;
    char *ptr_string =NULL;
    // declare the char and the string
    char c1 = 'a';
    char s2[] = "hello, world!";
    char *s1 = s2;
    cout << "use the pointer to acess the string: " << s1 << endl;
    cout << "use the array to acess the string: " << s2 << endl;
    return 0;
}


