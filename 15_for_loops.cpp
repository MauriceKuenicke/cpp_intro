# include <iostream>
# include <cmath>

using namespace std;

int main(){

	// Long version
	int index = 1;
	while (index <= 5){
		cout << index << endl;
		index++;
	}

	// Compact Version using a for-loop  
	// (initialize variable, set condition, code that executes at the end)
	for(int i = 1; i <= 5; i++){
		cout << i << endl;
	}

	cout << "----------------" << endl;
	// Using this to iterate over content from an array
	int nums[] = {1,2,3,4,5,6,7};
	int len = sizeof(nums)/sizeof(*nums);
	cout << "Length: " << len << endl;
	for (int i = 0; i < len ; i++){
		cout << nums[i] << endl;
	}

	return 0;
}