#include<iostream>
using namespace std;
template <class T>
T sum_n(T, T);
int main()
{
    int x{2}, y{3};
    // call the function sum_n
    int z = sum_n(x, y);
    cout << "the value of the z is: " << z << endl;
    return 0;
}

template <class T>
T sum_n(T x, T y)
{
    return (x+y);
} 
