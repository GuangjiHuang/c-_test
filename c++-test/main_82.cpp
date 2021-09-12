// add your own define
//#define LIB_EXPORTS

#ifndef MAIN_82_H

#ifdef LIB_EXPORTS

#ifdef __GNUG__
#define MAIN_82_H __attribute__((visibility("default")))
#endif

#else
#define MAIN_82_H

#endif
#endif

#include<iostream>
#include<string>
using namespace std;
// the decalration of the function
MAIN_82_H void foo();

int main()
{
    ;
    return 0;
}

void foo()
{
    cout << "this is the foo" << endl;
    cout << "this is the function: " << __FUNCTION__ << endl;
}


