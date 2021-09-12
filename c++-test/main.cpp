#include<iostream>
using namespace std;

// the declaration of the function
//extern "C" void foo();
void foo();

int main()
{
    cout << "this is the: " << __FUNCTION__ << endl;
    cout << "the file is: " << __FILE__ << endl;
    // call the function foo
    foo();

    return 0;
}
