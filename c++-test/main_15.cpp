#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/* upper the words's fist character */
int main()
{
    string s("  hello, the world!");
    bool space_flag = false;
    for (string::size_type i=0; i!=s.size(); i++)
    {
        if (isspace(s[i]))
        {
            space_flag = true;
            continue;
        }
        if (space_flag)
        {
            s[i] = toupper(s[i]);
            space_flag = false;
        }
    }
    cout << s << endl;
    return 0;
}
