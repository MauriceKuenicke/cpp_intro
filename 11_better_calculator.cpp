# include <iostream>
# include <cmath>

using namespace std;

int main(){
	double num1, num2, result;
	char op;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "What operation do you want to use?";
	// Using cin and not getline() because we are only storing a char
	cin >> op;

	cout << "Enter second number: ";
	cin >> num2;

	if(op == '+'){
		result = num1 + num2;
	} else if(op == '-'){
		result = num1 - num2;
	} else if(op == '*'){
		result = num1 * num2;
	} else if(op == '/'){
		result = num1/num2;
	} else {
		cout << "Invalid Operator!" << endl;
	}
	cout << result;


	return 0;
}