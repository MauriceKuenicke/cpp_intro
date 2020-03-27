# include <iostream>
# include <cmath>

using namespace std;

int main(){
	// Second closed brackets for a 2D Array
	int numberGrid[3][2] = {
		                   {1, 2},
		                   {3, 4},
		                   {5, 6}
						 };

	// access specific numbers
	cout << numberGrid[2][0] << endl;
	cout << "---------------" << endl;

	// nested for-loops
	int array_rows = sizeof(numberGrid)/sizeof(*numberGrid);
	int array_columns =  sizeof(numberGrid[0])/sizeof(*numberGrid[0]);

	for(int i=0; i < array_rows; i++){
		for(int j=0; j < array_columns; j++){
			cout << numberGrid[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}