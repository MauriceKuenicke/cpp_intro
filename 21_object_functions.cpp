# include <iostream>

using namespace std;

class Book{
	public:
		string title;
		string author;
		int pages;
		Book(string aTitle, string aAuthor, int aPages){
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
		Book(){
			title = "No Title";
			author = "No Author";
			pages = 0;
		}
		bool isBig(){
			if(pages > 600){
				return true;
			} else{
				return false;
			}
		}
};

int main(){
	Book book1("Harry Potter", "JK Rowling", 500);
	cout << book1.author << endl;
	Book book2("Lord of the Rings", "Tolkien", 700);
	cout << book2.isBig() << endl;
	


	return 0;
}