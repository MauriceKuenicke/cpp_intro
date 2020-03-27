# include <iostream>

using namespace std;

// super class
class Chef{
	public:
		void makeChicken(){
			cout << "The chef makes chicken" << endl;
		};

		void makeSalad(){
			cout << "The chef makes salad" << endl;
		};

		void makeSpecialDish(){
			cout << "The chef makes bbq ribs" << endl;
		};

};

// Inherit all the functions from the chef class
// subclass
class ItalianChef : public Chef{
	public:
		void makePasta(){
			cout << "The chef makes Pasta" << endl;
		};

		void makeSpecialDish(){
			cout << "The chef makes chicken parm" << endl;
		};

};

int main(){
	Chef Gustav;
	Gustav.makeChicken();
	Gustav.makeSpecialDish();

	ItalianChef Romeo;
	Romeo.makeChicken();
	Romeo.makePasta();
	Romeo.makeSpecialDish();


	return 0;
}