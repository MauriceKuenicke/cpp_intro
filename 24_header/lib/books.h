#ifndef BOOKS_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define BOOKS_H
/* https://stackoverflow.com/questions/3246803/why-use-ifndef-class-h-and-define-class-h-in-h-file-but-not-in-cpp
https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=vs-2019
https://stackoverflow.com/questions/14575799/using-namespace-std-in-a-header-file
Not using namespace std because 
https://stackoverflow.com/questions/14575799/using-namespace-std-in-a-header-file
*/
namespace Library
{
    class Book
    {
    public:
    	std::string title, author;
    	int pages;

    	Book();
    	Book(std::string aTitle, std::string aAuthor, int aPages);
        void getTitle();
    };

}

#endif
