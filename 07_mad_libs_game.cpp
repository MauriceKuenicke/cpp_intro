# include <iostream>


using namespace std;

int main(){

	string color, pluralNoun, celebrity;

	cout << "Enter a Color: ";
	getline(cin, color);
	cout << "Enter a plural noun: ";
	getline(cin, pluralNoun);
	cout << "Enter a Celebrity: ";
	getline(cin, celebrity);


	cout << "Roses are " << color << endl;
	cout << pluralNoun << " are blue" << endl;
	cout << "I Love " << celebrity << endl;




	return 0;
}