#include<iostream>
#include<string>
using namespace std;

int main()
{
    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occured. Exception Nr. " << e << endl;
    }
    // the throw is the operator
    try
    {
        double a = 1/0;
    }
    catch (...)
    {
        cout << "defalut exception" << endl;
    }

    return 0;
}

