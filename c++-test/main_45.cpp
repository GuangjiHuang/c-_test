#include<iostream>
#include<string>

using namespace std;
int main()
{
    cout << "hello, world!" << endl;
    istream &input = cin;
    string s1;
    getline(input, s1);
    cout << "the s1 is the: " << s1 << endl;
    return 0;
}


