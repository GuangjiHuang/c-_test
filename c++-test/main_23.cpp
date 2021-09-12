#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    // print all the arguments that you get
    for (int i=1; i<argc; i++)
        cout << *(++argv) << endl;
    return 0;
}
