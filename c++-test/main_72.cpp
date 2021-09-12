#include<iostream>
using namespace std;

int main()
{
    constexpr int a  = 3;
    cout << "the value of the a is the: " << a << endl;

    // try to change the value of the a
    a = 4;
    cout << "the value of the a is the: " << a << endl;
    return 0;
}
