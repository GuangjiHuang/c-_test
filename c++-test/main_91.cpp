#include<iostream>
using namespace std;

int main()
{
    cout << "hello, world!" << endl;
    ;
    // test the month
    int digit_month;
    const int const_num = 4;
    while (true)
    {
        cout << "Input the month: " << endl;
        cin >> digit_month;
        // test
        if (1<= digit_month && digit_month <= 12)
        {
            // the case 
            switch (digit_month)
            {
                case 1: case 2: case 3:
                {
                    cout << "this is the sprign!" << endl;
                    break;
                }
                case const_num: case 5: case 6:
                {
                    cout << "this is the summer!" << endl;
                    break;
                }
                case 7: case 8: case 9:
                {
                    cout << "this is the autum!" << endl;
                    break;
                }
                default:
                {
                    cout << "this is the winter!" << endl;
                    break;
                }
            }
        }
        else
            cout << "you input is wrong!" << endl;
    }
    return 0;
}
