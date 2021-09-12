#include<iostream>
#include<typeinfo>
enum color {red, yellow, green = 20, blue};
using namespace std;
int main()
{
    // creat a color object, color_var1
    color color_var1 = blue;
    decltype(color_var1) color_var2 = yellow;
    double test_a = red;

    cout << "the value of the color_var1 is the: " << color_var1 << endl;
    cout << "the value of the color_var2 is the: " << color_var2 << endl;
    cout << "use the element of the color to assign to the int_type: " << test_a << endl;
    cout << "the type of the color_var is the: " << typeid(color_var1).name() << endl;

    return 0;
}

