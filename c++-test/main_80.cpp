#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // the string object to store the line
    string s_line;
    // creat the ofstream;
    ifstream of {"todolist.txt"};
    // read line of the of
    // use the vector to store the x and the y
    vector<char> result;
    char result_single;
    while(getline(of, s_line))
    {
        if (!s_line.empty())
        {
            cout << s_line << endl;
            result_single = s_line[1];
            result.push_back(result_single);
        }
    }
    // cout the result
    for (auto i : result)
        cout << i << " ";
    cout << endl;

    return 0;
}
