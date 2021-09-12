#include<iostream>
#include<string>
using namespace std;
int main()
{
    double a;
    string word;
    string line;
    cout << "input the a and the word" << endl;
    cin >> a >> word;
    cout << "input the line" << endl;
    //getline(cin, line);
    cin >> line;
    // print the a and the word and the line
    cout << "the a is: " << a << endl;
    cout << "the word is: " << word << endl;
    cout << "the line is: " << line << endl;
    return 0;
}
   
