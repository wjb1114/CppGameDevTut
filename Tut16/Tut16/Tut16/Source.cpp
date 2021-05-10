#include <iostream>
#include <string>
using namespace std;

// base class
class Parent
{
public:
	virtual void Greet()
	{
		cout << "Hello!" << endl;
	}
};

// overrides function in Parent
class Child : public Parent
{
public:
	void Greet()
	{
		cout << "What\'s up?" << endl;
	}
};

// overrides function(s) in Parent and Child
class Grandchild : public Child
{
public:
	virtual void Greet() override
	{
		cout << "Insert joke." << endl;
	}
};

int main()
{

	system("pause");
}