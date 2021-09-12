#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int *pa = &a;

    int *&pa_ref = pa;
    // use the constant pointer to simulate the reference
    int **ppa = &pa;
    int ***pppa = &(&pa);

    cout << "the value of the a is: " << *pa << endl;
    cout << "the value of the a is: " << *pa_ref << endl;
    cout << "the value of the a is: " << **ppa << endl;
    cout << "the value of the a is: " << ***pppa << endl;



    return 0;
}
