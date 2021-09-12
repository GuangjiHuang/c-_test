#include<iostream>
#include<stdexcept>
using namespace std;

// the declaration of the function
double get_area(double radius);
int main()
{
    // promote the user to enter radius
    cout << "Enter the radius: ";
    double radius;
    cin >> radius;

    try
    {
        double result = get_area(radius);
        cout << "The area is the: " << result << endl;
    } 
    catch(invalid_argument& ex)
    {
        cout << ex.what() << endl;
    }

    cout << "Excution countuinue ... " << endl;
    return 0;
}

double get_area(double radius)
{
    if (radius<0)
        throw invalid_argument("Radius canot be negative");
    return radius * radius * 3.14159;
}

