#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
    /* test the c style */
    // the character in the c
    char c1 = 'h';
    char c2 = 'e';
    char c3 = 'l';
    char c4 = 'l';
    char c5 = 'o';
    // the string in the c 
    char s1[] = "hello";
    char s2[] = "the";
    char s3[] = "world";
    // store them in the array
    char *p_char[] = {&c1, &c2, &c3, &c4, &c5};
    char *p_str[] = {s1, s2, s3};
    //check about the sizeof of the array
//    // for the character array
//    cout << "the character: " << "array: "<< sizeof p_char << "; the element: " << sizeof p_char[0] << endl;
//    // for the string array
//    cout << "the string: " << "array: " << sizeof p_str << "; the element: :" << sizeof p_str[0] << endl;
//    // for the char array
//    cout << "the char array(not the pointer): " << "array: " << sizeof s1 << "; the elment: " << sizeof s1[0] << endl;
//
    // acces the character using the pointer array
    for (int i=0; i<sizeof(p_char) / sizeof(p_char[0]); i++)
            cout << p_char[i] << "address: " << static_cast<void *>(p_char[i]) << endl;
    // access the string using the pointer array
    for (int i=0; i<sizeof(p_str)/sizeof(p_str[0]); i++)
    {
        cout << p_str[i] << endl;
    }
    // use the for range to hello the world
    for (auto i : p_str)
        cout << i << endl;
    // use the for range to modify the array's element
    char *temp_p = p_str[0];
    for (char const * &i : p_str)
    {
        i = "hello the world";
    }
    // cout the result after modifying
    cout << "after modifying" << endl;
    for (const char * i : p_str)
        cout << i << endl;
    // cout the adress of the p_char


    /* test the c++ style */
    return 0;
}
