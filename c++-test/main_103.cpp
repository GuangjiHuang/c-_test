/* 9.21-19:52 - 20:19 *//*{{{*/
/*
purpose:
1) to test the ostream &os = cout; os to reference the cout
2) the algorithm to achieve the: 
-> the string: "  hello world ni   hao   " 
to-> 
hello
world
ni
hao
*//*}}}*/
  
#include<iostream>
#include<string>

using namespace std;

// declaration of the funciton
void output_word(ostream& os, const string& src_str);

int main()
{
    cout << "------- start ---------" << endl;
    // give the var
    string str{" hello world ni   hao  "};
    // call the function;
    output_word(cout, str);
    cout << "------- end ---------" << endl;
    return 0;
}

void output_word(ostream& os, const string& src_str)
{

    bool word_begin_anchor = false;
    for (auto i : src_str)
    {

        if ((word_begin_anchor == false) && (i == ' ')) continue;
        word_begin_anchor = true;
        if (i != ' ')
            os << i;
        else
        {
            os << endl;
            word_begin_anchor = false;
        }
    }
}
