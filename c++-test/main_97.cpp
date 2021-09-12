#include<iostream>
#include<vector>
#include<typeinfo>

using namespace std;

int main()
{
    // create the vector
    vector<int> my_vec{1, 2, 3, 5, 7, 10};

    // use the for to access the element
    cout << " ---- using the for loop to access the elements ------" << endl;
    for (auto i : my_vec)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << " ---- using the iterator to access the elements ------" << endl;
    for (vector<int>::const_iterator iterator_i=my_vec.cbegin(); iterator_i<my_vec.cend(); iterator_i++)
    {
        cout << *iterator_i << " ";
    }
    cout << endl;
    // the capacity test:
    cout << " ---------------- the capacity testing ---------------------" << endl;
    // is empty?
    cout << "the my_vec is empty? " << my_vec.empty() <<  endl;
    // the size?
    cout << "the size of the my_vec is the: " << my_vec.size() << endl;
    cout << "the maxsize of the vector is the: " << my_vec.max_size() / (1e9)<< endl;
    // the capacity?
    cout << "the capacity is the: " << my_vec.capacity() << endl;
    // the resize function
    my_vec.resize(3);
    for (auto i : my_vec) cout << i << " ";
    cout << endl;

    my_vec.resize(5);
    for (auto i : my_vec) cout << i << " ";
    cout << endl;

    my_vec.resize(10, 8);
    for (auto i: my_vec) cout << i << " ";
    cout << endl;

    cout << " ---------------- the modifiers ---------------------" << endl;

    cout << " ---------------- access the elements ---------------------" << endl;
    // try to use the at the [] operator
    cout << "the size of the my_vec is the: " << my_vec.size() << endl;
    cout << "the my_vec[9]?: " << my_vec[9] << endl;
    cout << "the my_vec[10]?: " << my_vec[10] << endl;
    // use the at function
    try 
    {
        cout << "the my_vec.at(9): " << my_vec.at(9) << endl;
        my_vec.at(10);
    }
    catch(out_of_range &ex)
    {
        cout << "---------------------------------------" << endl;
        cout << "There are some errors as follow: " << endl;
        cout << ex.what() << endl;
        cout << "---------------------------------------" << endl;
        cout << " try to use the operator [] to access the element" << endl;
        cout << " the 10th element is the " << my_vec[10] << endl;
    }
    catch(...)
    {
        cout << "there are some errror happens!" << endl;
    }


    return 0;
}
