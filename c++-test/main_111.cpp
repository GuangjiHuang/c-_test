/*time: unkown
 * purpose:
 * 1) to test the main's argument: argc and the argv: including the program's name
 * 2) the c string -> c++'s template string, just to assign the value is ok
 */

#include<iostream>
#include<string>

using namespace std;

int main(int argc, char **argv)
{
    // output the argc
    cout << "the argc is the: " << argc << endl;

    // loop to output the argv
    for (int i=0; i<argc; i++)
    {
        cout << "the argument " << i+1 << "is the: " << endl;
        cout << argv[i] << endl;
    }
    cout << "the c string to the stl sting" << endl;
    string str1 = argv[0];
    cout << "the str1 is the: " << str1 << endl;

    return 0;
}
