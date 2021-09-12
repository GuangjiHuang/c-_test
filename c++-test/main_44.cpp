#include<iostream>
using namespace std;

int main()
{
#if __cplusplus > 201402
    cout << "the value of the __cplusplus is: " << __cplusplus << endl;
#else
    cout << "No define the __cpluspuls" << endl;
#endif
    return 0;
}
