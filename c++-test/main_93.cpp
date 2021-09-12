#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int num_den, num_div;
label:
    cout << "please input two interger: " << endl;
    cin >> num_den >> num_div;

    try
    {
        //if (num_div == 0)
        //    throw "errror";
        cout << "the quotient is the: " << num_den / num_div << endl;
    }
    catch(...)
    {
        cout << "this is some error" << endl;
        cout << "try to continut to do!" << endl;
        goto label;
    }

    return 0;
}
