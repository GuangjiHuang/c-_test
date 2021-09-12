#include<iostream>
#include<string>
using namespace std;
/* using the pointer to access the elements of the string */
/* 
   make the conclusion that :
   we can not use the string's name as the pointer just like the array
*/

int main()
{
    string s1("hello, world!");
    char *ptr = s1;
    auto *ptr1 = &s1[0];
    //cout << "the value of the second element in the string is: "  << *(ptr+1) << endl;
    cout << "the value of the second element in the string is: "  << *(ptr1+1) << endl;
    return 0;
}

