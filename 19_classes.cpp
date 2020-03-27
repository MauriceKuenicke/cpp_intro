# include <iostream>

using namespace std;

// blueprint for our new datatype
class Book {
	public:
		string title;
		string author;
		int pages;
};



int main(){

	// create the object (instance of class)
	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	Book book2;
	book2.title = "Lord of the Rings";
	book2.author = "Tolkien";
	book2.pages = 700;

	cout << "Book1 title: " << book1.title << endl;
	cout << "Book2 title: " << book2.title << endl;


	return 0;
}