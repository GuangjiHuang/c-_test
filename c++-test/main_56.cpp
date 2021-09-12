#include<iostream>
using namespace std;

int main()
{
    int arr_int[]{1, 3, 5}, (*ptr_arr)[3] = &arr_int;

    printf("the ptr_arr's value is the: %p\n", ptr_arr);

    printf("the ptr_arr+1's value is the %p\n", ptr_arr+1);

    printf("%d\n", *(10 + *ptr_arr));
    cout << "the size of the interger is the: "<< sizeof(int) << endl;

    return 0;
}
