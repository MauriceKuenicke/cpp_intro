# include <iostream>
# include <cmath>

using namespace std;

int exponent(int num1, int num2){
	int ans = num1;
	if (num2 == 0){
		return 1;
	}
	for (int i = 1 ; i < num2; i++){
		ans*=num1;
	}
	return ans;
}

int main(){

	cout << exponent(4,2);

	return 0;
}