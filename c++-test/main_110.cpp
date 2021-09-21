/* time: 16:13 - xxx
 * purpose: 
 * 1) make the progess and then show it
 */

#include<iostream>
#include<string>
#include<chrono>
#include<thread>
#include<random>

using namespace std;

// the function declaretion
void wait(unsigned nms);
unsigned int get_random(unsigned min, unsigned max, string method);
void print_bar(unsigned num_notation, unsigned line_length, unsigned nms, char notation);


int main()
{
    ;
    // the var: wait_time, notation, length
    char notation = '#';
    unsigned int range_min = 2, range_max = 20;
    string method = "default"; // "default", "normal_distribution", "others"

    unsigned int nms = 100;
    unsigned int line_length = (unsigned int) 2 * range_max;

    // in the loop and continue the output, break condition: range_endPoint_count > 10
    int range_endPoint_count = 0, threshold = 20;
    while(range_endPoint_count < threshold)
    {
        // generate the random number
        unsigned int num_notation = get_random(range_min, range_max, method);

        // print the line
        print_bar(num_notation, line_length, nms, notation);

        // renew the loop condition, range_endPoint_count
        if (num_notation == range_min || num_notation == range_max)
            range_endPoint_count ++;

    }

    return 0;
}

void wait(unsigned nms)
{
    this_thread::sleep_for(chrono::milliseconds(nms));
}

unsigned int get_random(unsigned min, unsigned max, string method)
{
    unsigned int num_notation;
    if (method == "default")
    {
        unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
        default_random_engine e(seed);

        uniform_int_distribution<int> distr(min, max);
        num_notation = distr(e);
    }
    else if(method == "normal_distribution")
    {
        ;
    }
    else
    {
        num_notation = (unsigned int) (min + max) / 2;
    }

    return num_notation;
}

void print_bar(unsigned num_notation, unsigned line_length, unsigned nms, char notation)
{/*{{{*/
    // recorrect the length of the line_length
    if (line_length <= num_notation)
    {
        cout << "The line_length is too small!" << endl;
        cout << "Change to the: " << (int) 1.5*line_length << endl;
    }
    // output the preview of the progress
    for (int i=0; i<num_notation; i++)
    {
        if (i==0)
            cout << "[";
        else if(i==line_length-1)
            cout << "]";
        else
            cout << ".";
    }
    cout << flush;
    // output the notation
    cout << "\r" << flush; // return to the line begin
    for(int i=0; i<num_notation+2; i++)
    {
        if (i==0)
            cout << "[" << flush;
        else if(i==num_notation+1)
            cout << "]" << flush;
        else
        {
            cout << notation << "" << flush;
            wait(nms);
        }
    }
    // output the ...done!
    for(int i=0; i<line_length-num_notation; i++)
    {
        cout << "." << flush;
    }
    cout << " done!" << endl;
}/*}}}*/

