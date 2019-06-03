#include "iostream"
#include "string"
#include "sstream"

using namespace std;

int main(int argc, char* argv[])
{
	string userInput="This is sentence 1. This is sentence 2. Does this sentence	has a tab? Yes.";
	int words = 1;     
	int sentences = 0;
	int paragraphs = 1;

	//cout << "Enter some text: ";
	//getline (cin, userInput);

	for (int i = 0; i < int(userInput.length()); i++) 
    { 		
		if (userInput.empty()) 
		{
			words--;
			paragraphs--;
		}

		if (userInput[i] == ' ')  
			words++ ;

		if (userInput[i] == '.')
			sentences++;
			

		if (userInput[i] == '\n' && userInput[i] == '\t')
			paragraphs++;
    }
	cout << "words: " << words << endl;
	cout << "sentences: " << sentences << endl;
	cout << "paragraphs: " << paragraphs << endl;

	//cout << "Number of words in sentence :" << endl;
	
	/*
     istringstream iss(userInput);
       do
       {
         string sub;
         iss >> sub;
         cout << "Substring: " << sub << endl;
       } 
	while (iss);*/

	return 0;
}
