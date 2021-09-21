/* time: 2021年9月21日09:30{{{
 * purpose: 
 * 1) test the copy funciton that from the algorithm;
 * 2) the array's name is also the iterator;
 * 3) the iterator including the poiterj.
 *
 */ /*}}}*/

#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector

using namespace std;

int main () 
{
    int myints[]={10,20,30,40,50,60,70};
    int yourints[9]{0};
    std::vector<int> myvector (7);
    vector<int> yourvector(7);

    std::copy ( myints, myints+7, myvector.begin() );

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it!=myvector.end()+3; ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';
    // cout the vector's information
    // the size
    cout << "the size of the myvector is the: " << myvector.size() << endl;
    // try to copy the elements to the yourvector
    copy (myints, myints+7, yourvector.begin());
    cout << "the size of the yourvector is the: " << yourvector.size() << endl;
    // try to use the iterator to ouptut the yourvector
    for (auto i : yourvector)
    {
        cout << i << " ";
    }
    cout << endl;

    // use the poiter that has no the bounary
    for (size_t i=0; i<7; i++)
    {
        cout << yourvector[i] << " ";
    }
    cout << endl;

    // for the yourints
    cout << "your ints: " << endl;
    for (auto i : yourints)
        cout << i << " ";
    cout << endl;

    // after the copyying
    auto pt_after_copy = copy(myints, myints+7, yourints);
    cout << "after copying, yourints are the: " << endl;
    for (auto i: yourints)
        cout << i << " ";
    cout << endl;
    // use the pt_after_copy to assign the value
    *pt_after_copy++ = 1314;
    *pt_after_copy = 520;

    cout << "after assigning the value: " << endl;
    for (auto i: yourints)
        cout << i << " ";
    cout << endl;
    // try to access the yourvector[8]
    cout << "try to access the yourvector[8]" << endl;
    cout << "yourvector[1000] = " << yourvector[1000] << endl;

    return 0;
}
