#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    string line;
    while (true)
    {
        cin >> word;
        getline(cin, line);
        cout << "the word is: " << word << endl;
        cout << "the line is: " << line << endl;
    }
    return 0;
}
