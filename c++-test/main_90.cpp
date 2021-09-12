#include<iostream>
using namespace std;

// the declaration of the funnction
template <typename _Tp1, typename _Tp2>
_Tp1 sum_add(_Tp1 x, _Tp2 y);

template <typename _Tp1>
_Tp1 sum_add(_Tp1);

template <typename _Tp>
_Tp return_val()
{
    _Tp var = 3.14;
    return var;
}

int main()
{
    // call the function
    //double var_d = sum_add<int, double>(3.14, 2);
    double var_d = sum_add(3.14, 2);
    cout << "the value of the var_d is the: " << var_d << endl;
    // test the type of hte <type>
    //double var_double = return_val<double>();
    cout << return_val() <<  endl;
    return 0;
}
template <typename _Tp1, typename _Tp2>
_Tp1 sum_add(_Tp1 x, _Tp2 y)
{
    return x + y;
}
template <typename _Tp1>
_Tp1 sum_add(_Tp1 x)
{
    return 2 * x;
}

// about the at function;
// at<the type> ();
// the type can be the double, int, ...., schar, uchar, float, double and short ansd theso on
// or it can be the <Vec2b> <Vec....> lflaslfjlkdf;
//
