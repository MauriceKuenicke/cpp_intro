# include <iostream>
# include <cmath>

using namespace std;

// Function that won't return anything
void sayHi(string user_name){
	cout << "Hello " << user_name << endl;
}


// Function that returns a number
double cube(double num){
	double result  = num * num * num;
	return result;
}


int main(){
	string in_name;
	cout << "Who do you want to say 'Hello' to?: ";
	getline(cin, in_name);
	sayHi(in_name);

	double num, res;
	cout << "\nWhat number do you want to cube?: ";
	cin >> num;
	res = cube(num);
	cout << "The Result is: " << res << endl;



	return 0;
}