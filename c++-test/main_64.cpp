#include<iostream>
#include<ostream>
using namespace std;
ostream &foo(ostream&);

int main()
{
    ostream my_os(cout.rdbuf());
    my_os << "hello the world! - by os_define" << endl;

    cout << "hello the world! - by cout" << endl;
    // call the function
    foo(cout) << "nihao" << endl;

    return 0;
}

// function's parameter and the return type as the reference

ostream &foo(ostream &parameter)
{
    return parameter;
} 
