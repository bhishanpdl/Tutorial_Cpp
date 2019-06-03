#include "iostream"
#include "string"
#include "sstream"

using namespace std;

int main(int argc, char* argv[])
{
	string st="This is sen1. This is sent2.\n\tThis is para2.";
	int w=1, s=0, p=1;

	for (int i = 0; i < int(st.length()); i++) 
    { 		
		if (st.empty())  { w--;p--;}
	    if (st[i] == ' ')  w++ ;
		if (st[i] == '.' || st[i] == '?')  s++;
		if (st[i] == '\n' && st[i+1] == '\t') p++;
    }
	cout << "words: " << w << endl;
	cout << "sentences: " << s << endl;
	cout << "paragraphs: " << p << endl;

	return 0;
}
