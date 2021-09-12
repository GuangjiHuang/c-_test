#include<iostream>
using namespace std;
int &ref_test(int&);

/* the reference type as the function return value */
int main()
{
    int a = 2;
    // use the function's reference to change the value of the a
    ref_test(a) = 3;
    cout << "the value of the a is: " << a << endl;
    // if use the reference as the rvalue, it just is the value;
    int c{88};
    int b = ref_test(c); // note that you cannot use the constant value as the argument for the ref_test
    cout << "the value of the b is: " << b << endl;
    return 0; 
}

int &ref_test(int& x)
{
     // can not return the local variables's reference or the poiter
    return x;
}
