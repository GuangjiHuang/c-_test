#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main()
{
    // creat the object 
    int var_int = 2;
    char var_char{'c'};
    double var_double{3.1415926};
    string var_string{"hello, world"};

    // cout the type of them
    cout << "the type of the var_int is: " << typeid(var_int).name() << endl;
    cout << "the type of the var_char is: " << typeid(var_char).name() << endl;
    cout << "the type of hte var_double is: " << typeid(var_double).name() << endl;
    cout << "the type of the var_string is: " << typeid(var_string).name() << endl;
    // use the type_name<decltype(var)>() to output the type of the variable
    cout << "the type of the var_int is: " << type_name<decltype(var_int)>() << endl;
    cout << "the type of the var_char is: " << type_name<decltype(var_char)>() << endl;
    cout << "the type of hte var_double is: " << type_name<decltype(var_double)>() << endl;
    cout << "the type of the var_string is: " << type_name<decltype(var_string)>() << endl;


    return 0;
} 
