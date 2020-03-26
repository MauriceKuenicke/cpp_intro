# include <iostream>
# include <cmath>

using namespace std;

int main(){
	int index = 1;

	// Check condition before running the code
	while(index <= 5){
		cout << index << endl;
		index++;  // index = index +1
	}

	// Check condition after running the code
	index = 1;
	do{
		cout << index << endl;
		index++;
	}while(index <= 5);


	return 0;
}