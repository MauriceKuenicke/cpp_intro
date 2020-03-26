# include <iostream>


using namespace std;

int main(){

	int secret_num = 7;
	int nr_tries = 10;
	int guess_nr = 0;
	int guess;

	while(guess != secret_num && guess_nr < 10){
		cout << "Please enter your guess (" << nr_tries-guess_nr << " remaining): ";
		cin >> guess;
		guess_nr++;
	}
	if (guess != secret_num){
		cout << "\nSorry out of guesses!";
	} else{
		cout << "\nWell done! you found the number!";
	}
	return 0;
}