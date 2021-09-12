#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/* use the reference to change the elements of string container */
int main()
{
    string s("Hello, World!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;

    string s1("Hello, World!");
    for (auto c : s1)
        c = toupper(c);
    cout << s1 << endl;

    return 0;
}
