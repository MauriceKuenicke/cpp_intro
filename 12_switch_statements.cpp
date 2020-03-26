# include <iostream>
# include <cmath>

using namespace std;

// Convert integer number into string
string getDayofWeek(int dayNum){
	string dayName;

	// Put in the value you want to compare to all the different values
	switch(dayNum){
		case 0:
			dayName = "Sunday";
			break;
		case 1:
			dayName = "Monday";
			break;
		case 2:
			dayName = "Tuesday";
			break;
		// etc.
		default:
			dayName = "Invalid Daynumber";
	}
	return dayName;
}

int main(){
	int num;
	cout << "What Daynumber do you want to transform?";
	cin >> num;
	cout << getDayofWeek(num);

	return 0;
}