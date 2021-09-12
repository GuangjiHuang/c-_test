#include<iostream>
using namespace std;

//declaration of the funciton
__attribute__((constructor)) void foo_1();
__attribute__((destructor)) void foo_2();

int main()
{
    // cout the standard predefined macro
    /* the time and the date */
    cout << "time: " << __TIME__ << endl;
    cout << "date: " << __DATE__ << endl;
    /* the file and the location */
    cout << "line: " << __LINE__ << endl;
    cout << "file: " << __FILE__ << endl;
    /* the compiler */
    cout << "compiler: " << __STDC__ << endl;
    cout << "compiler: g++? " << __cplusplus << endl;
    /* the file's base name and the file_name */
    cout << "the base name: " << __BASE_FILE__ <<  endl;
    //cout << "the file name: " << __FILE_NAME__ << endl;

    return 0;
}
void foo_1()
{
#ifdef TEST
    cout << "======= TEST =========" << endl;
    cout << "the value of the TEST is: " << TEST << endl;
#endif
    cout << "------- begin --------" << endl;
}
void foo_2()
{
    cout << "------- end --------" << endl;
}
