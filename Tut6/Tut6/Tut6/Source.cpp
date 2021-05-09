#include <iostream>
#include <string>
using namespace std;

// & means reference - calling this function will update the caller's value
void AddOne(int& number);
void RefTest();
void ChangeStr(string& str);
void ChangeStr(string& str, string toAdd);

int main()
{
	string myStr = "Druid";

	string& myRef = myStr;

	cout << myStr << endl;
	cout << myRef << endl;
	
	myStr += " Mechanics";

	cout << myStr << endl;
	cout << myRef << endl;

	ChangeStr(myStr);

	cout << myStr << endl;
	cout << myRef << endl;

	ChangeStr(myStr, "!!");

	cout << myStr << endl;
	cout << myRef << endl;

	system("pause");
}

void AddOne(int& number)
{
	// passed by reference, so caller's value is updated inside its own scope
	number++;
}

void ChangeStr(string& str)
{
	str += "!";
}

void ChangeStr(string& str, string toAdd)
{
	str += toAdd;
}

void RefTest()
{
	int myInt = 1;
	AddOne(myInt); // now equals 2
	cout << myInt << endl;

	int b = 1;
	int& refB = b; // reference to b var
	refB++; // since this is a reference, buth this value and the core b val are incremented

	cout << b << endl; // outputs 2
}