#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    // test the size of the vector
    vector<double> d1, d2{1.2, 2.3, 3, 4, 5 ,6, 7, 8};
    vector<int>i1{2}, i2;
    // the string
    string s1{"hello, the world"}, s2;
    cout << "the size of the s1 is: " << sizeof s1 << endl;
    cout << "the size of the s2 is: " << sizeof s2 << endl;

    // cout the size of the object: d1, d2 and i1, i2;
    cout << "the size of the d1 is: " << sizeof d1 << endl;
    cout << "the size of the d2 is: " << sizeof d2 << endl;
    cout << "the size of the i1 is: " << sizeof i1 << endl;
    cout << "the size of the i2 is: " << sizeof i2 << endl;
    printf("d1's adress: %p\n", &d1);
    printf("d2's adress: %p\n", &d2);
    printf("i1's adress: %p\n", &i1);
    printf("i2's adress: %p\n", &i2);
    return 0;
}


