#include <iostream>
using namespace std;

void welcome()
{
	cout << "Welcome!" << endl;
}

void printNumber(int numToPrint)
{
	cout << numToPrint << endl;
}

int add(int a, int b)
{
	return a + b;
}

int main()
{
	welcome();
	printNumber(42);

	printNumber(add(1, 3));

	system("pause");
}