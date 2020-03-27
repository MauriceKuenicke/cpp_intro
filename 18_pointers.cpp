# include <iostream>
# include <cmath>


using namespace std;

int main(){
 
	// Data stored inside the computer memory at a specific memory-adress
	int age = 19;
	double gpa = 2.7;
	string name = "Mike";

	// print out the memory address (pointer)
	cout << &age << endl;

	// Create variable and store the pointer (pointer-variable)
	int *pAge = &age;
	double *pGpa = &gpa;
	string *pName = &name;
	cout << pAge << endl;

	// dereferencing a pointer
	cout << *pAge << endl;
	cout << *&age;



	return 0;
}