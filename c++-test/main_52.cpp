#include<iostream>
#include<vector>
#include<string>
#include<mutex>
#include<thread>
#include<atomic>
using namespace std;

typedef unsigned long long ull;
/* test the thread and the mutex program */

// creat the global var
//ull my_amount = 0;
atomic<ull> my_amount(0);

// creat the mutex object
mutex m; // m is the mutex function

// creat the sum function, that add 1
void sum(int start, int end)
{
    for (int i=start; i<=end; i++) 
    {
     //   m.lock();
        my_amount += i; 
      //  m.unlock();
    }

}

ull sum_(int start, int end)
{
    ull my_amount_single = 0;
    for (int i=start; i<=end; i++) my_amount_single += i; 
    return my_amount_single;
}


int main()
{
    int n = 1000000000;
    // creat the threads
    thread t1(sum, 1, n/2);
    thread t2(sum, n/2+1, n);


    // call the single_thread to conut ths mymount
    ull sum_single_thread = sum_(1, n);


    // join the threads to the main
    t1.join();
    t2.join();
    // cout the result and compare them
    cout << "the single thread's result is the: " << sum_single_thread << endl;
    cout << "the multiple thread's result is the: " << ::my_amount << endl;



    return 0;
}
