#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "Hello, world";
    bool ret;
    ret = s1 <= s2;
    cout << "the comparasion result is: " << ret << endl;
    // about the bool's ouput
    bool var_bool = false;
    cout << "output the bool val is: " << var_bool << endl;
    // use the bool to attend the arithemetic
    cout << "var_bool add the 1 is: " << var_bool + 1 << endl;
    // use the false to add the 1
    cout << "false + 1 = " << false + 1 << endl;
    return 0;
}
