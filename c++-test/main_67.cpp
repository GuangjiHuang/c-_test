#include <iostream>
#include <string>
using namespace std;

// declare the funcion
void foo_1(int, int);
double foo_2(int, int);
int *foo_3(int, int);
double glo_var = 3.14;
int glo_var_1 = 2;
extern int glo_var_2;
int main()
{
    int a{1}, b{2};
    // call the function foo_1 and the foo_2 and the foo_3
    foo_1(a, b);
    double c = foo_2(a, b);
    int *d = foo_3(a, b);

    return 0;
}

