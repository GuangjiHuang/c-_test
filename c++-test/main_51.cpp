#include<iostream>
#include<vector>
using namespace std;

/* try to use the lambda function to find the max value of the container */
int main()
{
    vector<int> vec_int {1, 3, 5, 2};
    // declare the lambda function
    auto find_max = [=] (bool print_flag=false) ->int {
        int temp = 0;
        for (auto i : vec_int)
        {
            if (i > temp) temp = i;
        }
        if (print_flag)
            cout << "the max value is: " << temp << endl;
        return temp;
    };

    // call the lambda function
    int result;
    result = find_max(true);
    cout << "The result is the: " << result << endl;

    return 0;
}
