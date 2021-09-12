#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    // creat the fstream
    ifstream f_input("main_80.cpp");
    f_input.seekg (0, f_input.end);
    int length  = f_input.tellg();
    f_input.seekg(0, f_input.beg);

    cout << "the length is: " << length << endl;

    // the var to store the content
    string s;
    while(getline(f_input, s))
        cout << s << endl;
    return 0;
   
}

