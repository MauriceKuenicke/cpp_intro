# include <iostream>

using namespace std;

int main(){


	string phrase = "How are you doing?";
	cout << "Hello!\n";
	cout << phrase << endl;

	cout << "The phrase is " << phrase.length() << " characters long." << endl;

	// String index positions starts at 0
	cout << phrase[2] << endl;

	// Set new character values
	phrase[0] = 'B';
	cout << phrase << endl;
	phrase[0] = 'H';

	// Find function, start at specific index
	cout << phrase.find("you", 0) << endl;

	// Substring, start at specific index with a given length
	cout << phrase.substr(0, 3) << endl;

	string sub_phrase = phrase.substr(0, 3);
	cout << "The substring is: " << sub_phrase << endl;





	return 0;
}