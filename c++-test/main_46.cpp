#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string file_name{"hello.txt"};
    ofstream myfile;
    myfile.open(file_name);
    myfile << "Writing this to a file.\n";
    myfile.close();

    return 0;
} 
