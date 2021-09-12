#include<iostream>
#include<chrono>
using namespace std;
int main()
{
    cout << chrono::system_clock::period::num << "/" << chrono::system_clock::period::den << endl;
    // creat the seconds duration object sec;
    chrono::seconds secs{100};
    cout << "the secs' duration is the: " << secs.count() << endl;
    // print the period of hte secs
    cout << "the sec's period is the: " << secs.period() << endl;

    return 0;
} 

