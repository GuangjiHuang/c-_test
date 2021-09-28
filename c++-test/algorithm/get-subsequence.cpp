/* time: 2021-9-27 Mon 14:29:18
 * (important)
 * function: emulate the python's get the slice the sequence.
 * for example: my_list = [1, 2, 3, 4, 5], my_list[-1:0:-1] = [5, 4, 3, 2]; 
 * make sure the parameters: start, end, step of the slice
 *
 */

#include<iostream>
#include<cassert>
using namespace std;

// declaration of the function
template <class T>
void access_list_element(const T *list, const int& start, const int& end, const int& step);

int main()
{
    // the test condition, using the array
    int my_arr[] {1, 3, 5, 7, 9};
    int argument_arr[3]{0,0,1};
    for(int i=0; i<10; i++)
    {
        // get the test index argumemts
        cout << "Please input the start:end:step" << endl;
        for(int j=0; j<3; j++)
            cin >> argument_arr[j];
        cout << "you input is the : " << endl;
        for (auto k : argument_arr)
            cout << k << " ";
        cout << endl;
        // call the function to show the result
        access_list_element(my_arr, argument_arr[0], argument_arr[1], argument_arr[2]);
    }
    return 0;
}

template <class T>
void access_list_element(const T *list, const int& start_, const int& end_, const int& step_)
{
    int end = end_;
    int start = start_;
    int step = step_;
    assert (step != 0); // step must be greater then 0
    // use the sizeof to get the length of the <xxxlist>
    T element = list[0];
    //size_t length = sizeof(T) / sizeof(element);
    size_t length = 5;
    // >>> debug information
    cout  << "the length is the: " << length << endl;
    // >>> debug information
    if (length == 0)
    {
        cout << "Empty list!" << endl;
    }
    // move the start and the end to the point to point
    int start_end_arr[2] {start, end};
    for (int i=0; i<2; i++)
    {
        if (start_end_arr[i] < 0)
        {
            // add the lenght
            start_end_arr[i] += length;
            if (start_end_arr[i] < 0)
                start_end_arr[i] = 0;
        }
        else if (start_end_arr[i] >= length)
            start_end_arr[i] = (i == 0 ? length - 1 : length); // if is the end, add 1
        else 
            start_end_arr[i] = start_end_arr[i];
    }
    //get the start and the end from the start_end_arr
    start = start_end_arr[0];
    end = start_end_arr[1];
    // output the result 
    cout << "the start and the end is : " << endl;
    for (auto i_ : start_end_arr)
        cout << i_ << " ";
    cout << endl;
    int oritent_flag = (end - start) * step;
    if (oritent_flag  <= 0)
    {
        // output the empty list
        cout << "Empty list!" << endl;
    }
    else
    {
        //ouput the sublist
        cout << "the sublist's elements are the: " << endl;
        if (step > 0)
        {
            // in order to output
            for (int index=start; index<end; index+=step)
                cout << list[index] << " ";
            cout << endl;
        }
        else // the step < 0
            // reverse
        {
            for (int index=start; index>end; index+=step)
                cout << list[index] << " ";
            cout << endl;
        }
    }
}
