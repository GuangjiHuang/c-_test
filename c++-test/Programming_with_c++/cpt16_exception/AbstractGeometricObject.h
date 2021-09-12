#ifndef GEOMETICOBJECT_H
#define GEOMETICOBJECT_H
#include <string>
using namespace std;

class GeometricObject
{
private:
    string color;
    bool filled;
protected:
    GeometricObject();
    GeometricObject(const string& color, bool filled);

public:
    string getColor() const;
    void setColor(const string& color);
    bool isFilled() const;
    void setFilled(bool filled);
    string toString() const;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};
#endif
