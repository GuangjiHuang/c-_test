#include<iostream>
#include<vector>
#include<string>
using namespace std;

int getine(char *s);

int main()
{
    // the vector of the string to store the input line
    vector<string> str_list;
    // loop and when you enter the EOF, then stop the loop
    int c;
    char *temp;
    while(getline())
    {
    }
}


int getline(char *s)
{
    int c;
    while((c=getchar()) != EOF)
    {
        *s = c;
    }
    return 0;
}
