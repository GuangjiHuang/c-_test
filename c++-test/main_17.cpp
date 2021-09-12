#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
    // output the how many the the arguments are?
    cout << "the number of the arguments is: " << argc << endl;

    // output what the arguments are?
    for (int i=0; i<argc; i++)
    {
        //cout << *argv[i] << endl;
        printf("%s", *argv[i]);
    }
}



