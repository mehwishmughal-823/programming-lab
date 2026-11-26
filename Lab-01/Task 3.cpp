#include <iostream>
using namespace std; //BUG 1: mising; after std

int main()
{
	cout << "Welcome to the Lab!" << endl; //BUG 2: missing ; after endl
	cout << "Today we learn \"C++\"." << endl; //BUG 3: in cout C is capital
	cout << "Files are in C:\\Lab01" << endl; //BUG 5: wrong use of escape sequence 
	cout << "Bye!" << endl; //BUG 4: missing closing " after Bye!
	return 0;
	
}