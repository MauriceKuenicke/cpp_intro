# include <iostream>
# include </home/mkuenicke/GitRepo/cpp_intro/24_header/lib/books.h>

using namespace Library;
using namespace std;

Book::Book(){
	title = "No Title";
	author = "No Author";
	pages = 0;
};

Book::Book(string aTitle, string aAuthor, int aPages){
	title = aTitle;
	author = aAuthor;
	pages = aPages;
};

void Book::getTitle()
{
    cout << title << endl;
};