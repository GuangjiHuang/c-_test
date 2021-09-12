#include<iostream>
#include<string>
using namespace std;

int main()
{
    double a = 2;
    double &ref_a = a;
    double &ref_ref_a = ref_a;

    string s1{"hello"};
    string &ref_s1 = s1;
    cout << "--------------------------------" << endl;
    printf("%p\n", &s1);
    printf("%p\n", &ref_s1);
    cout << "--------------------------------" << endl;


    printf("the adress of the a is: %p\n", &a);
    printf("the adress of the ref_a is: %p\n", &ref_a);
    printf("the adress of the ref_ref_a is: %p\n", &ref_ref_a);
    //change the value of the a;
    a = 3;
    cout << "the ref_a's value is: " << ref_a << endl;

    return 0;
}
