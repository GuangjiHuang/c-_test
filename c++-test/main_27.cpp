#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> s_list;
    string str;
    while(getline(cin, str))
            s_list.push_back(str);
    // print all the string
    for (auto i : s_list)
        cout << i << endl;
    return 0;

}
