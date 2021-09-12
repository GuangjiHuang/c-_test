#include<iostream>
using namespace std;

int main()
{
    // the static var
    var++;
    static int var = 2;


    cout << "the var is: " << var << endl;
    return 0;
}

