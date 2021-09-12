#include<iostream>
#include<string>
#include<vector>
using namespace std;
/* use the for range in to access the elements */
int main()
{
    string s1("hello, world!");
    vector<int> vec1 = {1, 2, 3, 5};
    for (auto i : s1)
        cout << i << endl;
    for (auto i : vec1)
        cout << i << endl;
    // use the iterator to access the element of the container
    cout << "use the iterator to access the container's element" << endl;
    cout << "the string" << endl;
    for (auto j=s1.begin(); j!=s1.end(); j++)
        cout << *j << endl;
    cout << "the vector" << endl;
    for (vector<int>::iterator j=vec1.begin(); j!=vec1.end(); j++)
        cout << *j << endl;
    return 0;
}
