/*time: 11:01 - 11:24
 *purpose: 
 *1) construct a stack
 *2) implement the push and the pop funciton
 *3) be familiar with the *ptr++ and the *--ptr;
 *4) make claer the stack's structure. 
 */

#include<iostream>
#include<vector>
#define SIZE 100

using namespace std;
// the gobal variables, the stack and the pointer
int arr_stack[SIZE];
int *ps = arr_stack;
void print_stack();

// the declaration of the function
void push(int val);
int pop();

int main()
{
    
    // the push and the pop operator
    print_stack();
    // push the value
    for (int i=0; i<101; i++)
        push(i);

    print_stack();
    int get_val = pop();
    print_stack();
    cout << "the value that was poped is the: " << get_val << endl;


    return 0;
}

void push(int val)
{
    // check the size
    if (ps > arr_stack + SIZE -1)
    {
        cout << "The stack is full! Can not push value!" << endl;
        return;
    }
    // add the value to the stack, then the ps add 1
    *ps++ = val;
}

int pop()
{
    if (ps <= arr_stack)
    {
        // the stack is empty
        cout << "The stack is empty, can not pop the value!" << endl;
        return -1;
    }
    // the ps sub 1 and then pop the value of the ps
    return *--ps;
}

void print_stack()
{
    cout << "The stack's elements are the: " << endl;
    for (int *ptr=arr_stack; ptr <ps; ptr++)
        cout << *ptr << " ";
    cout << endl;
}
