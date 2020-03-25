# include <iostream>
# include <cmath>  // Import math package



using namespace std;

int main(){

	int wnumb = 5;
	double dnumb = 5.5;

	cout << "Add " << wnumb << " and " << dnumb << " together." << endl;
	cout << "The Result is: " << wnumb + dnumb << endl;

	// Incrementing numbers
	wnumb++;
	cout << wnumb << endl;
	wnumb--;
	cout << wnumb << endl;
	wnumb += 80;
	cout << wnumb << endl;

	// Be aware of using integers when floating point numbers are needed
	cout << "\nUsing only integers: " << endl;
	cout << 10/3 << endl;
	cout << "Using Floating Point numbers: " << endl;
	cout << 10.0/3.0 << endl;
	cout << "Using a combinations: " << endl;
	cout << 10.0/3 << endl;


	// Imported math functions
	cout << pow(2,5) << endl;
	cout << sqrt(25) << endl;
	cout << round(4.3) << endl;
	cout << ceil(4.3) << endl; // round the given number to the highest whole number
	cout << floor(4.8) << endl; // round the given number to the lowest whole number
	cout << fmax(3, 10) << endl; // give out the bigger number
	cout << fmin(3,10) << endl; // give out the lower number

	return 0;
}