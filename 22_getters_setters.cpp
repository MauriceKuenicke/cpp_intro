# include <iostream>

using namespace std;

class Movie{
	// Only code can access
	private:
		string rating;
	// Public access
	public:
		string title, director;
		// Constructor
		Movie(string aTitle, string aDirector, string aRating){
			title = aTitle;
			director = aDirector;
			setRating(aRating);
		};

		// Functions to change and access private variables
		void setRating(string aRating){
			if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
				rating = aRating;
			} else{
				rating = "NR";
			}
		};

		string getRating(){
			return rating;
		};
};

int main(){
	Movie avengers("The avengers", "Joss Whedon", "PG-13");
	avengers.setRating("Something Useless");
	cout << avengers.getRating() << endl;

	return 0;
}