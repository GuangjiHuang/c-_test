#include<iostream>
#include<string>
using namespace std;
/* use the for to access the elements of the containers */
int main()
{
    string s("hello world!!!");
    decltype (s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
                punct_cnt++;
    cout << punct_cnt << " punctuation character in " << s << endl;
    // check if include the cctype in this file
#if defined(CCTYPE)
    cout << "has been included the header cctype" << endl;
#else
    cout << "not included the header cctype" << endl;
#endif
    return 0;
}

