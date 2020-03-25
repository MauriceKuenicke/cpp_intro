# include <iostream>
# include <cmath>

using namespace std;


int main(){

	// User Input for int, char, float etc.
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "You are " << age << " years old." << endl;


	// User Input for strings
	string str; 
  	cin.ignore();  // Clear old Buffer
    cout << "Please enter your name: "; 
    getline(cin, str); 
    cout << "Hello, " << str << "\n"; 









	return 0;
}