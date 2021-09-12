//2021年8月5日09:56:35
// declare the extern function
void foo(int, int, int*);
void foo(int, double);
void foo(int, char);
void foo(int, int&, double&);
void foo();
// declare the class
class Myclass;
class Student;
extern "C" void foo(double, float);
extern "C" void nihao(int&); // it means that the linker find the symbol is the c-like, that is the limit.
// the var extern 
extern Student s2;
// the class definition
class Myclass
{
    public:
        Myclass() {}
};

class Student
{
    int a = 2;
    public:
        Student() {}
};

// define the funciton
void foo(int x, char y)
{
     x+y;
}

void foo()
{
    int a{3};
    int &ref_a{a};
    double var_d, &ref_var_d{var_d};
    int *ptr = 0;
    // call the function
    foo(a, ref_a,ref_var_d);
    foo(1, 2, ptr);
    foo(1, 3.14);
    foo(1, 'c');
    foo(3.14, 2.4f);
    foo(3.15, 2.5f);
    nihao(a);
    //the class
    Student s1;
    Myclass c1;
}
// 2021年8月5日10:06:36
void foo(double x, float y)
{
    x + y ;
}
