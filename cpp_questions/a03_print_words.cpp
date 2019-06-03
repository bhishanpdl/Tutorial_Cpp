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
         if (sub.length()!=0){
             //cout << "Substring length: " << sub.length() << endl;
             cout << "Substring: " << sub << endl;
         }
       } 
	while (iss);

	return 0;
}
