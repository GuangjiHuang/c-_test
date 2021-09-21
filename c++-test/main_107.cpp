/* time: 10:00 - 10:04 
 * purpose:
 * 1) use the ostream_iterator to output the content
 */

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    // create the vector
    vector<int> myvector;
    for (int i=0; i<10; i++) myvector.push_back(i);

    // 
    ostream_iterator<int> out_it (cout, ", ");
    copy(myvector.begin(), myvector.end(), out_it);
    cout << endl;

    return 0;
}
