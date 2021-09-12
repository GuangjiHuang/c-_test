#include<iostream>
using namespace std;

struct Student{
    int id;
    char name[10];
    char sex[10];
};
   
int main()
{
    int a = 3;
    bool b1 = true;
    double c = 1.34;

    int *p = &a;

    Student s1;
    cout << typeid(c).name() << endl;
    return 0;
}

