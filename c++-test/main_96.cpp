#ifndef TRIANGLEEXCEPTION_H
#define TRIANGLEEXCEPTION_H
#include<iostream>
using namespace std;

// the class
class TriangleException : public logic_error
{
private:
    double side1, side2, side3;
public:
    TriangleException(double side1, double side2, double side3) : logic_error("Invalid triangle")
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    double get_side1() const
    {
        return side1;
    }
    double get_side2() const
    {
        return side2;
    }
    double get_side3() const
    {
        return side3;
    }

};

int main()
{
    ;
    cout << "hello, world!" << endl;
    return 0;
}
#endif
