#include<iostream>
#include<string>

using std::cout; 
using std::endl;
using std::string;
int main()
{
// the initialization of the string object
    string s1;
    string s2 = s1;
    string s3 = "hello";
    string s4(10, 'c');
    string s5("hello, world!");
// print the result
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    return 0;
}
