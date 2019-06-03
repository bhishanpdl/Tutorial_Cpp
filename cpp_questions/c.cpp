#include "iostream"
#include "string"
#include "sstream"

using namespace std;

int main(int argc, char* argv[])
{
	string userInput="";
    cout << "Please enter valid sentences:> ";
    getline(cin, userInput);
    
    istringstream iss(userInput);
       do
       {
         string sub;
         iss >> sub;
         cout << "Substring: " << sub << endl;
       } 
	while (iss);

	return 0;
}
