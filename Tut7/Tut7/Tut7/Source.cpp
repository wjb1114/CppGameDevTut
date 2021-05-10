#include <iostream>
#include <string>
using namespace std;

void PassOnlyVars(int& num);
void CanPassLiterals(const int& num);
enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Running,
	PS_Sprinting
};

int main()
{
	// These 2 are fundamentally the same thing in C
	char hue[4] = { 'R', 'e', 'd', '\0' };
	string strHue = "Red";

	// string is in std namespace, without using statement would need to use std::string

	cout << hue << endl;
	cout << strHue << endl;

	// Constants

	const int ONE = 1;

	// const int TEST; -- not allowed, must initialize inline
	// ONE++; -- not allowed, constants cannot be changes once initialized
	// ONE = 2; -- not allowed, constants cannot be changes once initialized
	// ONE(2); -- not allowed, constants cannot be changes once initialized

	cout << ONE << endl;

	// PassOnlyVars(2); -- error
	CanPassLiterals(3);

	// AND / OR
	if (true && false) // AND operator, requires all to be true
	{
		// false
	}

	if (true || false) // OR operator, requires at least one to be true
	{
		// true
	}

	// Arrays

	int myIntArray[3];
	myIntArray[0] = 1;
	myIntArray[1] = 2;
	myIntArray[2] = 3;

	for (int i = 0; i < 3; i++)
	{
		cout << myIntArray[i] << endl;
	}

	double doubleArr[2] = { {3.14159}, {2.71828} };
	cout << doubleArr[0] << endl;
	cout << doubleArr[1] << endl;

	// Enums and switches

	PlayerStatus status = PlayerStatus::PS_Running;
	switch (status)
	{
		case PS_Crouched:
			cout << "Crouched" << endl;
			break;
		case PS_Standing:
			cout << "Standing" << endl;
			break;
		case PS_Running:
			cout << "Running" << endl;
			break;
		case PS_Sprinting:
			cout << "Sprinting" << endl;
			break;
		default:
			cout << "Invalid Player State" << endl;
	}

	system("pause");
}

void PassOnlyVars(int& num)
{
	cout << num << endl;
}

void CanPassLiterals(const int& num)
{
	cout << num << endl;
}

