#include<iostream>
#include<string>
using namespace std;

class Example5{
    string *ptr;
public:
    Example5(const string& str) : ptr(new string(str)) {}
    Example5()  {}
    ~Example5() { delete ptr;}
    //copy constructor
    Example5(const Example5& x) : ptr(new string(x.content())) {}
    // move copy assignment
    Example5& operator = (Example5 &&);
    //access content
    const string & content() const {return *ptr;}
    // get the pointer's value
    void print_pointer()
    {
        printf("the ptr is: %p\n", ptr);
    }
    // change the string's character
    void change_character(size_t index, char c)
    {
    //    if (index < (*ptr).size())
            (*ptr)[index] = c;
    }

};

int main()
{
    Example5 foo("Example");
    Example5 bar = foo;
    cout << "bar's content: " << bar.content() << endl;
    // print the pointer of the foo and the bar object
    foo.print_pointer();
    bar.print_pointer();
    // change the string's character
    cout << "----------- After changeing! ------------"  << endl;
    foo.change_character(0, 'e');
    cout << "bar's content: " << bar.content() << endl;
    cout << "foo's content: " << bar.content() << endl;
    // about the copy assignment
    Example5 bar_la;
    bar_la = foo;
    cout << "bar_la's content: " << bar_la.content() << endl;

    return 0;
}
