#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;
	int X;
	int Y;
	int Z;
};

int main()
{
	// Pointers

	// Define base int
	int myInt = 2;
	// Define pointer to myInt - will contain the memory address
	int* ptr = &myInt;

	// Output the memory address
	cout << ptr << endl;
	// Output the value AT the memory address
	cout << *ptr << endl;

	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// getting first item in array
	int* numPtr = numbers;

	cout << *numPtr << endl; //numbers[0]

	// when incrementing an array pointer, enables access to next element
	numPtr++;

	cout << *numPtr << endl; //numbers[1]

	Container container = { "Sam", 5, 6, 7 };

	Container* prtToCont = &container;

	cout << (*prtToCont).Name << endl;
	cout << (*prtToCont).X << endl;
	cout << (*prtToCont).Y << endl;
	cout << (*prtToCont).Z << endl;

	cout << prtToCont->Name << endl; // arrow removes need to dereference

	// cout << *prtToCont.Name << endl; -- error, * operator happens last. *prtToCont does not have implicit access to Name property, only after the * operator finishes.

	system("pause");
}