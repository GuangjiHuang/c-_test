#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    // creat the myfile object
    ofstream myfile("main_54.txt");
    if (myfile.is_open())
    {
        // add the content
        myfile << "WHAT?" << flush;
    }
    else
        cout << "Can't open the myfile" << endl;

    return 0;
}
