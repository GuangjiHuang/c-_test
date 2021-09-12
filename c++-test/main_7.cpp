#include<iostream>
#include<string>
#include<vector>
#define sizeof(A) sizeof(A)
using namespace std;
// creat a structure
struct Data_type_list{
    char var_char;
    bool var_bool;
    short var_short;
    int var_int;
    long var_long;
    long long var_long_long;
    float var_float;
    double var_double;
};
    
/* about the sizeof the std::string::size_type test */
int main()
{
    //Data_type_list dtl, *p_dtl = &dtl;
    Data_type_list *p_dtl;
    //Data_type_list dtl;
    //p_dtl = &dtl;
    string s1("hello, the world!");
    auto s1_length = s1.size();
    cout << "the sizeof the s1: " << sizeof s1_length << endl;
    cout << "the sizeof the char: " << sizeof p_dtl->var_char << endl;
    cout << "the sizeof the long: " << sizeof p_dtl->var_long << endl;
    cout << "the sizeof the long long: " << sizeof p_dtl->var_long_long << endl;
    cout << "the sizeof the int: " << sizeof p_dtl->var_int << endl;
    // try to access the 
    cout << "try" << endl;
    p_dtl->var_long_long = 12;
    cout << p_dtl->var_long_long << endl;
    return 0;
}

