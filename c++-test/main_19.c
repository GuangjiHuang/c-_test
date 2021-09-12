#include<stdio.h>

int main()
{
    const int i = 0;
    int j = 1;

    int *ptr = &j;
    //cout << "the value of the j is: " << *ptr << endl;
    // try to assign the &i to the ptr
    ptr = &i;
    *ptr = 2;
    //cout << "the value of the i is: " << *ptr << endl;
    printf("the value of the i is: %d", *ptr);
}
