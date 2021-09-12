#ifndef NonPositiveSideException_H
#define NonPositiveSideException_H

#include <stdexcept>
using namespace std;

class NonPositiveSideException : public logic_error
{
private:
    double side;
public:
    NonPositiveSideException(double side)
        : logic_error("None positive side")
    {
        this->side = side;
    }
    double getSide()
    {
        return side;
    }
};
#endif

