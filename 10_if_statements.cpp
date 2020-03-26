# include <iostream>
# include <cmath>

using namespace std;

int getMax(int num1, int num2, int num3){
	int result;
	if(num1 >= num2 && num1 >= num3){
		result = num1;
	} else if (num2 >= num1 && num2 >=num3){
		result = num2;
	} else {
		result = num3;
	}
	return result;
}


int main(){
	// Using Booleans
	bool isMale = true;
	bool isTall = true;
	// && - and Operator, || - or Operator, ! - negation Operator
	if(isMale && isTall){
		cout << "You are a tall male!" << endl;
	} else if(isMale && !isTall) {
		cout << "You are male but not tall!" << endl;
	} else if(!isMale && isTall){
		cout << "You are female and tall!" << endl;
	} else if(!isMale && !isTall){
		cout << "You are female and short!" << endl;
	} else {
		cout << "Something completely different!" << endl;
	}



	// Not using Booleans
	int num1, num2, num3, res;
	cout << "\nLet's get the biggest number out of three." << endl;
	cout << "Give the first number: ";
	cin >> num1;
	cout << "Give the second number: ";
	cin >> num2;
	cout << "Give the third number: ";
	cin >> num3;
	res = getMax(num1, num2, num3);
	cout << "The biggest number is: " << res << endl;



	return 0;
}