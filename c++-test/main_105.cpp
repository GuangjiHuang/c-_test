/*time: 21:29 - 21:32 *//*{{{*/
/*
purpose:
1) make understand the int *& var and the int&* var;
int*& var->: var is the reference to the pointer points to the integer
int&* var->: Invalid;(the pointer can not points to the reference, because the reference is not
the lvalue;
*//*}}}*/

#include<iostream>
using namespace std;

int main()
{
    // test the Type*& var

    int a = 2, *ptr_a = &a;
    int &ref_a = a;

    int*& ref_ptrInt = ptr_a;

    int&* ptr_refInt = &ref_a;

    cout << "the a is the: " << a << endl;
    cout << "the a is the: " << *ptr_a << endl;
    cout << "the a is the: " << *ref_ptrInt << endl;
    cout << "the a is the: " << *ptr_refInt << endl;

    return 0;
}
