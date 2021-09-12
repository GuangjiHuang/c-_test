//2021年8月5日09:56:35
// declare the extern function
extern void foo(int, int);
extern void foo(int, double);
void foo(int, char);
void foo();

// define the funciton
void foo(int x, char y)
{
     x+y;
}

void foo()
{
    // call the function
    foo(1, 2);
    foo(1, 3.14);
    foo(1, 'c');
}
// 2021年8月5日10:06:36

