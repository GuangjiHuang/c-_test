#include<iostream>
#include<string>
#include<vector>
using namespace std;
/* compare the std::string::size_type and the int and the long long, and the unsigned long long */
int main()
{
    unsigned long long num = 21000000000;
    string s1(num, 1);
    auto len_1 = s1.size();
    unsigned long long len_2 = s1.size();
    cout << " the len_1's value is: " << len_1 << endl;
    cout << " the len_2's value is: " << len_2 << endl;
    char var_char;
    cin >> var_char;
    return 0;
}
