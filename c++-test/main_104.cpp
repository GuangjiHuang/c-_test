/* time: 21:04 - 21:10 *//*{{{*/
/* 
purpose:
1) use the c's function malloc to allocate the memory, if fail to allocate, it would 
not return the exception, but the pointer points to the NULL;
2) use the c++'s function new to allocate the memory, if fail to allocate, it would 
return teh exception: bad_alloc, use the ex.what() to see the result.
3) so recommand to use the new function of the c++.
*//*}}}*/

#include<iostream>
#include<exception>

using namespace std;

int main()
{

    // use the new to allocate the memory
    try
    {
        for (int i=0; i<100; i++)
        {
            int* ptr_int = new(int[100000000]);
            cout << "allocate successfully " << i << " times" << endl;
        }
    }
    catch(exception &ex)
    {
        cout << ex.what() << endl;
        cout << "fail! exit!" << endl;
    }
    return 0;
}
