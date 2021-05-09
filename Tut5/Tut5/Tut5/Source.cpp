#include <iostream>
using namespace std;

int main()
{
	int myInt = 0;
	int count = 0;

	while (count < 10) // 10 iterations, but will not run if initially evaluates to false
	{
		cout << myInt << endl;
		myInt++;
		count++;
	}

	cout << endl << "----------" << endl << endl;

	myInt = 0;
	count = 0;

	do
	{
		cout << myInt << endl;
		myInt++;
		count++;
	} while (count < 10); // 10 iterations, guaranteed to run at least once

	cout << endl << "----------" << endl << endl;

	myInt = 0;
	count = 0;

	for (int i = 0; i < 10; i++) // exactly 10 iterations
	{
		cout << myInt << endl;
		myInt++;
	}

	system("pause");
}