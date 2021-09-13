#include<iostream>

using namespace std;

int main()
{
    int arr_int[10];

    for (int i=0; i<sizeof(arr_int)/sizeof(int); i++)
    {
        cout << "i=" << i << endl;
        if (i-i/5*5 <=2)
        {
            arr_int[i] = 255;
        }
        else
            arr_int[i] = 0;
    }

    // cout the result
    for (auto i : arr_int)
    {
        cout << i << " ";
    }
    cout << endl;
    // test the result
    cout << "3/5*5=" << 3/5*5 << endl;

    return 0;
}
