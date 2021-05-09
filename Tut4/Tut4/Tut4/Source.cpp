#include <iostream>
using namespace std;

int main()
{
	int i = 3;
	i += 3;      // now 6

	cout << i << endl;

	i -= 2;      // now 4

	cout << i << endl;

	i /= 2;      // now 2

	cout << i << endl;

	i *= 6;     // now 12

	cout << i << endl;

	i %= 5;     // now 2

	cout << i << endl;

	i++;        // now 3

	cout << i << endl;

	i--;        // now 2

	cout << i << endl;

	system("pause");
}