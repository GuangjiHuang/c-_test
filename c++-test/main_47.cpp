#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int c;
    int counter = 0;

    while(cin >> c, c)
    {
        cout << counter++ << endl;
    }
    // the value of the c is:
    cout << "the value of the c is: " << c << endl;

    return 0;
}
