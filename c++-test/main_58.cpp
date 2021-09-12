#include<iostream>
using namespace std;

// define the class
class Rectangle{
    public:
        // the constructor
        Rectangle(int x, int y) : width(x), weight(y) { }
        int cout_area()
        {

            area = width*weight;
            // print the area
            print_area();

            return width*weight;
        }
    protected:
        void print_area()
        {
            cout << "the area is the: " << area << endl;
        }
    private:
        int width; 
        int weight;
        int area;
};
struct Triangle{
    int num = 3;
    int angle3() { return  180 - angle1 - angle2;}
    void set_angle(int a1, int a2)
    {
        angle1 = a1;
        angle2 = a2;
    }

    private:
        int angle1 = 80;
        int angle2 = 70;
};

int main()
{
    // creat the rec object
    Rectangle rec1(2, 3);
    // try to use the class pointer
    Rectangle *ptr_rec1 = &rec1;
    // print the area of the rec1
    ptr_rec1->cout_area();
    Triangle tri1;
    tri1.set_angle(45, 45);
    cout << "the another angle is the: " << tri1.angle3() << endl;


    return 0;
}

