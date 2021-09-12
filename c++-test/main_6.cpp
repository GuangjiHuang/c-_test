#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line) && !line.empty())
        cout << line << endl;
    if (line.empty())
        cout << "Jump out of the loop, the line is empty" << endl;
    else
        cout << "Jump out of the loop, because you press the ctrl + z" << endl;
    return 0;
}

