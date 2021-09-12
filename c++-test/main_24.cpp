#include<iostream>
#define SIZE 100
using namespace std;

int main()
{
    //creat the int array
    int arr_int[SIZE] = {1, 2, 3};
    //creat the pointer that points to the array
    // that is the difference between the array_name and the &array_name
    int (*p_arr_int)[SIZE] = &arr_int;
    // so the *p_arr_int is equavlant to the arr_int
    // int the memory, we use the p_arr_int to store the arr_int's adress, *p_arr_int means that this is the arr_int
    printf("%p", p_arr_int);
    printf("\n");
    printf("%p", ++p_arr_int);
    return 0;
}
