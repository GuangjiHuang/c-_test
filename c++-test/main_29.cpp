#include<iostream>
#include<string>
using namespace std;
int main()
{
	istream &in = cin;
	ostream &out = cout;
    string w, s;
    cin >> w;
    getline(in, s);

	out << "the Word you input is: " << w << endl;
    cout << "the rest of line that you input is: " << s << endl;
	return 0;
}
