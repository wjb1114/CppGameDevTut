#include <iostream>
using namespace std;

int main()
{
	// Expressions - combines things, returns value
	// Statements - execute in sequence, carry out some action
	// Expression statement - combination of the above

	// Statement
	char myCharacter;

	// Expression Statement
	myCharacter = 'y';

	int myInt;
	myInt = 13;

	// Expression, incl. side effects (writing to output stream)
	cout << myCharacter << endl;
	cout << myInt << endl;

	myCharacter = 'n';
	myInt = 12;

	cout << myCharacter << endl;
	cout << myInt << endl;

	cout << "You Died!" << endl;

	int a = 1;
	int b = 13;

	if (a < b)
	{
		cout << "a is less than b" << endl;
	}
	else if (a > b)
	{
		cout << "a is greater than b" << endl;
	}
	else
	{
		cout << "a is equal to b" << endl;
	}

	system("pause");

	// Truth Values
	// 0 is false
	// 1 is true
	// -1 is true
	// 0.00 is false
	// 0.00001 is true
	// All non-zero values evaluate to true

	// Relational Operators
	// 5 > 4 is true
	// 4 > 5 is false
	// 5 >= 4 is true
	// !false is true
	// !(5 > 6) is true
}