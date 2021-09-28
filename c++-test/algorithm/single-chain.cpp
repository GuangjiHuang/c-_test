#include<iostream>
#define SIZE 100000

using namespace std;

// the single list
struct My_list
{
    size_t length = 0;
    int* head = NULL;
};

// function declatration
void push_front(int x);
void insert(unsigned pos, int x);
void delete_kth(int x);

// the gobal variable
int arr_int[SIZE];

int main()
{/*{{{*/
    // declare a empty list
    My_list ls;
    // get the information
    int operation_num;
    cin >> operation_num;
    for (int i=0; i<operation_num; i++)
    {
        // call the correspoding operation
        char operation;
        cin >> operation;
        
        int value;
        int pos;
        switch(operation)
        {
            case 'H':
                cin >> value;
                push_front(value);
                break;
            case 'I':
                cin >> pos;
                cin >> value;
                insert(pos, value);
                break;
            case 'D':
                cin >> pos;
                delete_kth(pos);
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
    }
    return 0;
}/*}}}*/

void push_front(int x)
{
    ;
}
