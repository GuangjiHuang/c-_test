/* time: 2021年9月24日19:57:19{{{
 * purpose:
 * -> test the list assignment for the vector object;
 *//*}}}*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // the var
    vector<int> my_vector;
    my_vector = {1, 2, 3, 4};

    // output the vector
    for ( auto i : my_vector)
        cout << i << " " << endl;

    cout << endl;

    return 0;
}
