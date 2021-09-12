#include<iostream>
using namespace std;

// define the sturcture 
struct Ptr_self
{
    Ptr_self *ptr_self = NULL;
    int var_int = 2;
    int var_d = 3.14;
};

int main()
{

    cout << "hello, world!" << endl;

    // define the var
    Ptr_self obj_1 {&obj_1};

    // use the printf to cout the pointer;
    printf("the adress-1 is the : %p\n", obj_1);
    printf("the adress-2 is the : %p\n", obj_1.ptr_self);
    // use the name and the poitner to acess the element of the structure
    // change the var_int;
    obj_1.ptr_self->var_int = 1221;
    cout << "the var of the var_int is the : " << obj_1.var_int << endl;
    cout << "the var of the var_int is the : " << (obj_1.ptr_self)->var_int << endl;


    return 0;
}
