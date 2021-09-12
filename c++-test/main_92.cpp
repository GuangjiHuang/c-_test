#include<iostream>
#include<string>
#include<exception>
using namespace std;

int main()
{
    cout << "Enter two interger: "; 
    int number1, number2;
    cin >> number1 >> number2;
    try
    {
        if (number2 == 0)
        {
            string error_raise{"DIVIDED ZERO ERROR"};
            throw runtime_error("hello, this is the error!");
        }
        cout << number1 << " / " << number2 << " is " << number1 / number2 << endl;
    }
    catch (runtime_error& ex)
    {
        //cout << "Exception: an interger" << " cannot be divided by zero" << endl;
        cout << ex.what() << endl;
    }
    cout << "Execution continues ..." << endl;
    return 0;
}
