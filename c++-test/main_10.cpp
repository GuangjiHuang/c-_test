#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    string content;
    getline(cin, content);
    bool var_bool;
    for (auto i=content.begin(); i!=content.end(); i++)
    {

        var_bool = isalnum(*i);
        cout << *i << (var_bool ? "   is":"    is not") << "alnum" << endl;
    }
    return 0;
}
